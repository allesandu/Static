#include "Countable.h"
#include <iostream>

Countable::Countable() {
    objAmount += 1;
}

Countable::Countable(const Countable& copy) {
    objAmount += 1;
}

Countable& Countable::operator=(const Countable& copy) {
    return *this;
}

Countable::~Countable() {
    objAmount -= 1;
};

int Countable::objAmount = 0;

int Countable::getAmount() {
    return objAmount;
}
