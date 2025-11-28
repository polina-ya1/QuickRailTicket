#include "Ticket.h"

Ticket::Ticket(int id, const std::string& type, double ticket_p, double ticket_e, bool status, const std::string start, const std::string& end) : id_of_tickets(id), type_of_tickets(type), ticket_purchase_date(ticket_p), ticket_end_date(ticket_e), ticket_status(status), startStation(start), endStation(end) { }

bool Ticket::on_the_way() {
    if (startStation == endStation) { return true; }
    else { return false; }
} // ну это так здесь нужно осуществить перегрузку ляля

int Ticket::getID() const {
    return id_of_tickets;
}

std::string Ticket::getType() const {
    return type_of_tickets;
}

double Ticket::getPurchaseDate() const {
    return ticket_purchase_date;
}

double Ticket::getEndDate() const {
    return ticket_end_date;
}

bool Ticket::getStatus() const {
    return ticket_status;
}

std::string Ticket::getStart() const {
    return startStation;
}

std::string Ticket::getEnd() const {
    return endStation;
}

void Ticket::setStatus(bool status) {
    ticket_status = status;
}

void Ticket::displayInfo() const {
    std::cout << "Билет №: " << id_of_tickets << std::endl;
    std::cout << "Статус: " << (ticket_status ? "Активен" : "Неактивен") << std::endl;
    std::cout << "Маршрут: " << startStation << "-->" << endStation << std::endl;
    std::cout << "Дата покупки: " << ticket_purchase_date << std::endl;
    std::cout << "Дата окончания: " << ticket_end_date <<std::endl; 
}
