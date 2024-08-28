//Main.hpp

#ifndef Main_hpp
#define Main_hpp

#include <iostream>
#include <string>
#include <vector>
#include "Flight.hpp"

void displayMenu();
void displayHeader();
void trim_trailing_spaces(string &str);
Flight populate_flight_from_file(const string &filename);

int getValidRowInput(const string& prompt, int numRows);
char getValidSeatInput(const string& prompt, int numSeatsPerRow);
void clearConsole();
void inputValidation(int& choice);
void processMenuChoice(Flight& flight, int choice);

#endif
