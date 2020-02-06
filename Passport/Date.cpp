#include <iostream>
#include "Date.h"
#include <iomanip>

enum {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int isLeap(int year) {
    int leapStatus;
    
    if ( year % 4 != 0) {
        leapStatus = 0;
    } else if ( year % 100 != 0 ) {
        leapStatus = 1;
    } else if ( year % 400 != 0 ) {
        leapStatus = 0;
    } else {
        leapStatus = 1;
    }
    return leapStatus;
}

int lastDay(int month, int year) {
    int lastDay = 31;
    
    if ( month == April || month == June || month == September || month == November ) {
        lastDay = 30;
    } else if ( month == February ) {
        if ( isLeap(year) ) {
            lastDay = 29;
        } else {
            lastDay = 28;
        }
    }
    return lastDay;
}

void Date::validate(int day, int month, int year) {
    if ( year < 1 ) {
        throw InvalidDate("wrong yaer! Value must be larger than zero!");
    }
    if ( month < January || month > December ) {
        throw InvalidDate("Wrong month! Please, check and try again.");
    }
    if ( day < 1 ) {
        throw InvalidDate("Wrong day! Value must be larger than zero!");
    } else if ( day > lastDay(month, year) ) {
        throw InvalidDate("Wrong day! Entered value is larger than max day in the month");
    }
}

Date::Date(int day, int month, int year) {
    validate(day, month, year);
    
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::~Date() {}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << std::setfill('0') << std::setw(2) << date.getDay() << "/";
    out << std::setfill('0') << std::setw(2) << date.getMonth() << "/";
    out << date.getYear();
    return out;
}