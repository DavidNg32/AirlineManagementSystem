//Airline.hpp

#include <iostream>
#include <string>
#include <vector>
#include "Flight.hpp"
using namespace std;

#ifndef Airline_hpp
#define Airline_hpp

class Airline {
public:
    string getFlightName() const;
    void setFlightName(string name);
    void addFlight(Flight flight);
    unsigned long getNumberOfFlights();

private:
    string flightname;
    vector<Flight> flights;
    unsigned long numberOfFlights;
};

#endif

