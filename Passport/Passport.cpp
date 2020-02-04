#include "Passport.h"
#include <iostream>

Passport::Passport(const std::string& ser) {
    globID += 1;
    this->number = globID;
    this->series = ser;
}

Passport::Passport(const Passport& passport) {
    globID += 1;
    this->number = globID;
    this->series = passport.series;
}

Passport& Passport::operator=(const Passport& passport) { // dont work correctly!
    globID += 1;
    this->number = globID;
    this->series = passport.series;
    
    return *this;
}

int Passport::getNumber() const{
    return this->number;
}

const std::string& Passport::getSeries() const{
    return this->series;
}

const char& Passport::lastSymbol() const {
    int last = this->series.length() - 1;
    
    return this->series.at(last);
}

int Passport::globID = 100000;

std::ostream& operator<<(std::ostream& out, const Passport& pas) {
    out << "Pass: " << pas.getSeries() << "_" << pas.getNumber();
    out << " { last = " << pas.lastSymbol() << " ASCII = " << int(pas.lastSymbol()) << " }";
    out << " with ID=" << Passport::globID << std::endl;
    return out;
}
