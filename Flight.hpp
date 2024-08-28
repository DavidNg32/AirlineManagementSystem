//  Flight.hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Node.hpp"
using namespace std;

#ifndef Flight_hpp
#define Flight_hpp

class Flight {
public:
    Flight();
    Flight(const string& flightNumber, int numRows, int numSeatsPerRow);
    void displaySeatMap() const;
    void displayPassengerInfo() ;
    void addPassenger(); //
    void addPassenger(const string& firstName, const string& lastName, const string& phoneNumber, int id, int row, char seat);
    void removePassenger(int id);
    void saveDataToFile(const string& filename) const;
    int getNumRows() const;
    int getNumSeatsPerRow() const;
    
    ~Flight(); // Destructor to free the memory used by the linked list

private:
    string flightNumber;
    int numRows;
    int numSeatsPerRow;
    vector<vector<Seat> > seatMap;
    Node* head; // Head of the linked list
};

#endif 
