#include <iostream>
#include "Identifiable.h"


Identifiable::Identifiable(const std::string name) {
    lastID += 1;
    this->objID = lastID;
    this->objName = name;
}

Identifiable::Identifiable(const Identifiable& copy) {
    lastID += 1;
    this->objID = lastID;
    this->objName = copy.objName;
}

int Identifiable::getID() const{
    return this->objID;
}
const std::string Identifiable::getName() const {
    return this->objName;
}

Identifiable& Identifiable::operator=(const Identifiable& copy) {
    this->objName = copy.objName;
    
    return *this;
}

int Identifiable::lastID = 0;
