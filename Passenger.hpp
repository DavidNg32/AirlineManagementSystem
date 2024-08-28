//  Passenger.hpp

#include "Seat.hpp"
#include <stdio.h>
#include <string>

using namespace std;

#ifndef Passenger_hpp
#define Passenger_hpp

class Passenger {
public:
    Passenger();
    Passenger(const string& firstName, const string& lastName, const string& phoneNumber, int id, const Seat& seat);
    void displayInfo() const;
    int get_ID() const;
    const Seat& get_seat() const;
    const string& get_firstName() const;
    const string& get_lastName() const;
    const string& get_phoneNumber() const;

private:
    string firstName;
    string lastName;
    string phoneNumber;
    int id;
    Seat seat; // maybe change to Seat* seat
};

#endif
