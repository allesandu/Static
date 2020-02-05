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
    
    std::cout << "Start_:" << std::endl;
    Passport* p1 = new Passport();
    Passport* p2 = new Passport();
    Passport* p3 = new Passport();
    // *p3 = *p1;// dont work correctly
    
    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl;
    std::cout << *p3 << std::endl;
    
    // int diff = 'a' - 'A';
    // std::cout << "A-a: = " << diff << " position" << std::endl;
    
    // std::string newSer = "A";
    // newSer.push_back('B');
    // newSer.push_back(char(97));
    // std::cout << "NEw ser = " << newSer;
    // std::cout << " with lastSymb = " << newSer.at(newSer.length()-1) << std::endl;
    
    return 0;
}
