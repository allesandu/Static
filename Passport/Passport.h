#ifndef PASSPORT_H
#define PASSPORT_H
#include <iostream>
#include "Date.h"

class CheckException{
    public:
        std::string text;
        CheckException(const std::string& text) : text(text) {}
};

class Passport{
    private:
        std::string series;
        int number;
        Date* date;
        
        bool isLetter(const char& ch);
        void numberValidate(int serNumber);
        void letterValidate(const std::string& serStr);
        void isLast();
        std::string nextSeries(std::string str);
    
    public:
        Passport();
        Passport(const std::string& ser, int num = startNumber);
        ~Passport();
        
        Passport(const Passport& passport);
        Passport& operator=(const Passport& passport);
        
        int getNumber() const;
        const std::string& getSeries() const;
        Date* getDate() const;
        
    static int globID;
    static std::string globSeries;
    
    static const int startNumber = 100000;
    static const int lastNumber = 999999;
};

std::ostream& operator<<(std::ostream& out, const Passport& pas);

#endif // PASSPORT_H
