//  Passenger.cpp

#include "Passenger.hpp"
#include <iostream>

Passenger::Passenger() : id(-1) {}

Passenger::Passenger(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber, int id, const Seat& seat)
    : firstName(firstName), lastName(lastName), phoneNumber(phoneNumber), id(id), seat(seat) {}

void Passenger::displayInfo() const {
    std::cout << firstName << " " << lastName << " " << phoneNumber << " " << seat.get_row() << seat.get_seat() << " " << id << std::endl;
}

int Passenger::get_ID() const {
    return id;
}

const Seat& Passenger::get_seat() const {
    return seat;
}

const std::string& Passenger::get_firstName() const {
    return firstName;
}

const std::string& Passenger::get_lastName() const {
    return lastName;
}

const std::string& Passenger::get_phoneNumber() const {
    return phoneNumber;
}

