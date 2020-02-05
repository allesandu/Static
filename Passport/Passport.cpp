#include "Passport.h"
#include <iostream>

// void Passport::nextSeries(std::string str) {
std::string Passport::nextSeries(std::string str) {
    int step = 1;
    std::string newSer = "zz";
    char first = str[0];
    char second = str[1];
    
    if ( first == 'z' && second == 'z' ) {
        return newSer;
    }
    
    if ( second == 'Z' ) {
        step = 'a' - 'Z';
    }
    
    second += step;
    
    if ( second > 'z' ) {
        second = 'A';
        
        if ( first == 'Z' ) {
            step = 7;
        }
        first += step;
    }
    str[0] = char(first);
    str[1] = char(second);
    
    // std::cout << "done-str-" << str[0] << str[1] <<std::endl;
    return str;
}

Passport::Passport() {
    globID += 1;
    
    if ( globID > lastID ) {
        globID = 10;
        globSeries = nextSeries(globSeries);
    }
    this->number = globID;
    this->series = globSeries;
}

// Passport::Passport(const std::string& ser) {// think over and write accordind to task
//     globSeries = ser;
//     globID = startID;
    
//     this->number = globID;
//     this->series = globSeries;
// }

Passport::~Passport() {}

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

int Passport::globID = startID -1; // must be startID = 0  - dont forget to change
std::string Passport::globSeries = "Za";

std::ostream& operator<<(std::ostream& out, const Passport& pas) {
    out << "Pass: " << pas.getSeries() << "_" << pas.getNumber();
    out << " { last = " << pas.lastSymbol() << " ASCII = " << int(pas.lastSymbol()) << " }";
    out << " with ID=" << Passport::globID << std::endl;
    return out;
}
