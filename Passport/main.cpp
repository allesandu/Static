#include "Passport.h"
#include <iostream>

bool isLetter(const char& ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

void nextSeries(char ser[]) {
    int step = 1;
    int first = ser[0];
    int second = ser[1];
    
    if ( first == 'z' && second == 'z' ) {
        return;
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
    ser[0] = first;
    ser[1] = second;
    
    std::cout << "done---" << ser[0] << ser[1] <<std::endl;
}

void nextSeries(std::string str) {
    int step = 1;
    int first = str[0];
    int second = str[1];
    
    if ( first == 'z' && second == 'z' ) {
        return;
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
    str[0] = first;
    str[1] = second;
    
    std::cout << "done-str-" << str[0] << str[1] <<std::endl;
}

int main() {
    
    // const int size = 2;
    // char ser[size] = {'z', 'y'};
    // std::string str = "AZ";
    // // ser[0] = 'A';
    // // ser[1] = 'Z';
    
    // std::cout << "Series:" << str << std::endl;
    // std::cout << "-----------------------------" << std::endl;
    // std::cout << "1st_Symbol = " << str[0] << " isChar = " << isLetter(str[0]) << std::endl;
    // std::cout << "2nd_Symbol = " << str[1] << " isChar = " << isLetter(str[1]) << std::endl;
    // std::cout << "============================" << std::endl;
    
    // nextSeries(str);
    // // nextSeries(ser);
    // // nextSeries(ser);
    // // nextSeries(ser);
    
    // // std::cout << "Series:" << ser << std::endl;
    // std::cout << "-----------------------------" << std::endl;
    // std::cout << "1st_Symbol = " << ser[0] << " isChar = " << isLetter(ser[0]) << std::endl;
    // std::cout << "2nd_Symbol = " << ser[1] << " isChar = " << isLetter(ser[1]) << std::endl;
    // std::cout << "============================" << std::endl;
    
    // std::cout << "Start_:" << std::endl;
    try {
    Passport* p1 = new Passport();
    Passport* p2 = new Passport();
    Passport* p3 = new Passport();//"az", 599999);
    Passport* p4 = new Passport();
    Passport* p5 = new Passport();//"Zz", 999999);
    Passport* p6 = new Passport();
    Passport* p7 = new Passport("za", 999999);
    // Passport* p7 = new Passport();
    Passport* p8 = new Passport();
    Passport* p9 = new Passport();
    // *p3 = *p1;// dont work correctly
    
    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl;
    std::cout << *p3 << std::endl;
    std::cout << *p4 << std::endl;
    std::cout << *p5 << std::endl;
    std::cout << *p6 << std::endl;
    std::cout << *p7 << std::endl;
    std::cout << *p8 << std::endl;
    std::cout << *p9 << std::endl;
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;
    delete p7;
    delete p8;
    delete p9;
    }  catch (CheckException e) {
        std::cout << e.text << std::endl;
    }
    
    return 0;
}
