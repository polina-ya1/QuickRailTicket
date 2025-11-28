#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>
#include "Ticket.h"

class Ticket; 

class Validation {
    private:
    std::string time_and_date_of_validation;
    std::string validation_id_successful;
    std::string validation_failed;

    public:
    Validation (const std::string& validation, const std::string& is_successful, const std::string& failed);

    bool result_of_validation();
    Ticket* bool check_ticket(); 


};

#endif