#ifndef TARIFF_H
#define TARIFF_H

#include <iostream> 
#include <string>
#include "Ticket.h"

class Ticket();


class Tariff {
    private:
    int id_of_tariff; // номер тарифа
    std::strig type_of_tariff; // название тарифа 
    float price; // базовая цена
    bool transfer_limitation; // есть ли ограничения на пересадки true/false
    bool un_limited; // безлимитный тариф true/false
    std::string startStation;
    std::string endStation;

    public:
    Tariff (int id, const std::string& type, float price, bool transfer_lim = false, bool unlimited = false, std::string& start, std::string& end);

    float calculate_final_price(); // рассчитывает итоговую цену 
    void printInformation() const; // выводит информацию о тарифе
    
    bool getTicketType();

     

    // вспомогательные методы
    bool isNotUnLimited() const { // возвращение true если тариф не безлимитный 
        return !un_limited;
    }
    bool isUnlimitedWithoutRestrictions() const { // возвращает true если тариф безлимитный и без ограничения 
        return un_limited && !transfer_limitation;
    }
    bool isNotLimited() const {
        return !transfer_limitation;
    }
    bool hasLimitations() const {
        return transfer_limitation;
    }

    // геттеры
    float get_base_price() const {
        return price;
    }
    std::string get_type() const {
        return type_of_tariff;
    }

    std::string getStartStation() const {
        return startStation;
    }
    std::string getEndStation() const {
        return endStation;
    }


};

#endif