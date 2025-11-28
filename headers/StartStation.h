#ifndef STATION_H
#define STATION_H

#include <iostream>
#include <string>
#include <utility>

class Station {
    private:
    int id_of_station;
    std::string name_of_station;
    std::pair<double, double> coordinates;
    std::string branch_name;

    public:
    Station (int id, const std::string& name, std::pair<double, double> coord, const std::string& branch);
    std::string get_available_route();
};

#endif