//  Node.cpp

#include "Node.hpp"

Node::Node(const Passenger& passenger) : passenger(passenger), next(nullptr) {}

Passenger Node::get_passenger() const {
    return passenger;
}

Node* Node::get_next() const {
    return next;
}

void Node::set_next(Node* nextNode) {
    next = nextNode;
}

