#ifndef PASSPORT_H
#define PASSPORT_H
#include <iostream>

class Passport{
    private:
        int id;
        int number;
        std::string series;
        
        // void nextSeries(std::string str);
        std::string nextSeries(std::string str);
    
    public:
        Passport();
        // Passport(const std::string& ser);// think over and write accordind to task
        ~Passport();
        
        Passport(const Passport& passport); // copy constructor
        Passport& operator=(const Passport& passport);
        
        int getNumber() const;
        const std::string& getSeries() const;
        
        const char& lastSymbol() const;
        
    static int globID;
    static std::string globSeries;
    static const int startID = 999999;//100000;
    static const int lastID = 999999;
};

std::ostream& operator<<(std::ostream& out, const Passport& pas);

#endif // PASSPORT_H
