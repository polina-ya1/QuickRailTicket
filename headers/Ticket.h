#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>
#include "Tariff.h"



class Ticket {
    private:
    int id_of_tickets;
    std::string type_of_tickets;
    double ticket_purchase_date;
    double ticket_end_date;
    bool ticket_status;
    std::string startStation;
    std::string endStation;

    public:
    Ticket (int id, const std::string& type, double ticket_p, double ticket_e, bool status, const std::string& start, const std::string& end);

    bool on_the_way(); // здесь будет перегрузка функции

    //Геттеры 
    int getID() const;
    std::string getType() const;
    double getPurchaseDate() const;
    double getEndDate() const;
    bool getStatus() const;
    std::string getStart() const;
    std::string getEnd() const;

    //Сеттеры 
    void setStatus(bool status);

    //Метод для вывода нашей информэйшен 
    void displayInfo() const;
};

#endif