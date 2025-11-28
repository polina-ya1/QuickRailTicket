#ifndef ZONE_H
#define ZONE_H

#include <iostream>
#include <string>

class Zone {
    private:
    int id_of_zone;
    std::string name_of_zone;
    float tariff_multiplier;

    public:
    Zone (int id, const std::string& name, float multiplier);
    float calculate_base_fare();
};

#endif