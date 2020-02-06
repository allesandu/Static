#ifndef PASSPORT_H
#define PASSPORT_H
#include <iostream>
#include "Date.h"

class CheckException{};

class Passport{
    private:
        std::string series;
        int number;
        Date* date;
        
        std::string nextSeries(std::string str);
    
    public:
        Passport();
        Passport(const std::string& ser, int num = startNumber);// think over and write accordind to task
        ~Passport();
        
        Passport(const Passport& passport);// copy constructor - maybe dont need
        Passport& operator=(const Passport& passport);// - maybe dont need
        
        int getNumber() const;
        const std::string& getSeries() const;
        Date* getDate() const;
        
        const char& lastSymbol() const;
        
    static int globID;
    static std::string globSeries;
    
    static const int startNumber = 100000;
    static const int lastNumber = 999999;
};

std::ostream& operator<<(std::ostream& out, const Passport& pas);

#endif // PASSPORT_H
