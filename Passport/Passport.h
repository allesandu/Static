#ifndef PASSPORT_H
#define PASSPORT_H
#include <iostream>

class Passport{
    private:
        int id;
        int number;
        std::string series;
    
    public:
        Passport(const std::string& ser = "AA");
        ~Passport();
        
        Passport(const Passport& passport); // copy constructor
        Passport& operator=(const Passport& passport);
        
        int getNumber() const;
        const std::string& getSeries() const;
        
        const char& lastSymbol() const;
        
    static int globID;
};

std::ostream& operator<<(std::ostream& out, const Passport& pas);

#endif // PASSPORT_H
