#include "Tariff.h"
#include <iostream>

Tariff::Tariff(int id, const std::string& name, float price, bool transfer_lim, bool unlimited) : id_of_tariff(id), type_of_tariff(type), prie(price), transfer_limitation(transfer_lim), un_limited(unlimited) { }

float Tariff::calculate_final_price() {
    float final_price = price; // установка базовой цены

    if (isNotUnLimited() && transfer_limiation) { // рассчитывает скидку, если тариф не безлимитный и есть ограничения
        final_price *= 0.9f; // скидка 10%
    }

    if (isUnlimitedWithoutRestrictions()) { // если тариф безлимитный и без ограничений надбавка 
        final_price *= 1.2f; // надбавка 20%
    }

    return final_price;
}

void Tariff::printInformation() const {
    std::cout << "Тариф: " << type_of_tariff << " ID: " << id_of_tariff << std::endl;
    std::cout << "Базовая цена: " << price << std::endl;
    std::cout << "Ограничения трансфера: " << (transfer_limitation ? "Да" : "Нет") << std::endl;
    std::cout << "Безлимитный: " << (un_limited ? "Да" : "Нет") << std::endl;
    std::cout << "Финальная цена: " << calculate_final_price() << std::endl;
}

