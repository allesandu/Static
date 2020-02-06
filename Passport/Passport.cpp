#include "Passport.h"
#include <iostream>

// void Passport::nextSeries(std::string str) {
std::string Passport::nextSeries(std::string str) {
// std::string Passport::nextSeries(char str[]) {
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
            step = 'a' - 'Z';
        }
        first += step;
    }
    str[0] = char(first);
    str[1] = char(second);
    
    // std::cout << "done-str-" << str[0] << str[1] <<std::endl;
    return str;
}

Passport::Passport() {
    // globID += 1; // removed to the end
    
    if ( globID > lastNumber ) {
        globID = startNumber;
        globSeries = nextSeries(globSeries);
    }
    this->number = globID;
    this->series = globSeries;
    this->date = new Date();
    
    globID += 1;
}

Passport::Passport(const std::string& ser, int num) {
    // if ( ser.length() > 2 ) {
    //     throw CheckException();
    // }
    
    globID = num;
    
    globSeries = ser;
    if ( globID > lastNumber ) {
        globID = startNumber;
        globSeries = nextSeries(globSeries);
    }
    
    this->number = globID;
    this->series = globSeries;
    this->date = new Date(14, 5, 2009);
    
    globID += 1;
}

Passport::~Passport() {}

Passport::Passport(const Passport& passport) {// - maybe dont need
    // globID += 1;// removed to the end
    this->number = globID;
    this->series = passport.series;
    
    globID += 1;
}

Passport& Passport::operator=(const Passport& passport) { // dont work correctly!// - maybe dont need
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

Date* Passport::getDate() const {
    return this->date;
}

const char& Passport::lastSymbol() const {
    int last = this->series.length() - 1;
    
    return this->series.at(last);
}

int Passport::globID = startNumber; // must be startNumber = 0  - dont forget to change
std::string Passport::globSeries = "Za";

std::ostream& operator<<(std::ostream& out, const Passport& pas) {
    out << "Pass: " << pas.getSeries() << "_" << pas.getNumber();
    // out << " { last = " << pas.lastSymbol() << " ASCII = " << int(pas.lastSymbol()) << " }";
    out << " { birthday date : " << *pas.getDate() << " }";
    // out << std::endl;
    out << " series size=" << pas.getSeries().length();// << std::endl;
    return out;
}
