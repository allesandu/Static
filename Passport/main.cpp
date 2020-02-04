#include "Passport.h"
#include <iostream>

int main() {
    std::cout << "Start_:" << std::endl;
    Passport* p1 = new Passport();
    Passport* p2 = new Passport("MO");
    Passport* p3 = new Passport("LU");
    // *p3 = *p1;// dont work correctly
    
    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl;
    std::cout << *p3 << std::endl;
    
    int diff = 'a' - 'A';
    std::cout << "A-a: = " << diff << " position" << std::endl;
    
    std::string newSer = "A";
    newSer.push_back('B');
    newSer.push_back(char(97));
    std::cout << "NEw ser = " << newSer;
    std::cout << " with lastSymb = " << newSer.at(newSer.length()-1) << std::endl;
    
    return 0;
}
