// Seat.cpp

#include "Seat.hpp"

Seat::Seat() : row(0), seat('\0'), reserved(false) {}

Seat::Seat(int row, char seat) : row(row), seat(seat), reserved(false) {}

void Seat::reserve(bool isReserved) {
    reserved = isReserved;
}

void Seat::release(bool isReserved) {
    reserved = isReserved;
}

bool Seat::isReserved() const {
    return reserved;
}

int Seat::get_row() const {
    return row;
}

char Seat::get_seat() const {
    return seat;
}

