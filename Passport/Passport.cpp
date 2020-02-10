#include "Passport.h"
#include <iostream>

bool Passport::isLetter(const char& ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

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
            step = 'a' - 'Z';
        }
        first += step;
    }
    str[0] = char(first);
    str[1] = char(second);
    
    return str;
}

void Passport::numberValidate(int number) {
    if ( number > lastNumber || number < startNumber) {
        throw CheckException("Wrong Series! Series number must contain six digits");
    }
}

void Passport::letterValidate(const std::string& serStr) {
    if ( serStr.length() != 2 ) {
        throw CheckException("Wrong Series! Enter only TWO Letters!");
    }
    if ( !isLetter(serStr[0]) || !isLetter(serStr[1])) {
        throw CheckException("Wrong Series! Series must contain two letters!");
    }
}

void Passport::isLast() {
    if ( globID == lastNumber && globSeries =="zz" ) {
        throw CheckException("Error! The last Passport have been created!");
    }
}

Passport::Passport() {
    isLast();
    
    if ( globID > lastNumber ) {
        globID = startNumber;
        globSeries = nextSeries(globSeries);
    }
    this->number = globID;
    this->series = globSeries;
    this->date = new Date(10, 2, 2020);
    
    globID += 1;
}

Passport::Passport(const std::string& ser, int num) {
    letterValidate(ser);
    numberValidate(num);
    
    globID = num;
    globSeries = ser;
    isLast();
    
    if ( globID > lastNumber ) {
        globID = startNumber;
        globSeries = nextSeries(globSeries);
    }
    
    this->number = globID;
    this->series = globSeries;
    this->date = new Date(10, 2, 2020);
    
    globID += 1;
}

Passport::~Passport() {
    delete this->date;
}

Passport::Passport(const Passport& passport) {
    this->number = globID;
    this->series = passport.series;
    
    globID += 1;
}

Passport& Passport::operator=(const Passport& passport) {
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

int Passport::globID = startNumber;
std::string Passport::globSeries = "zz";

std::ostream& operator<<(std::ostream& out, const Passport& pas) {
    out << "Passport = " << pas.getSeries() << "_" << pas.getNumber();
    out << "  Person's Birthday = " << *pas.getDate();
    return out;
}
