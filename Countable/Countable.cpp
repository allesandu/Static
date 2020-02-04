#include "Countable.h"
#include <iostream>

Countable::Countable() {
    objAmount += 1;
}

Countable::~Countable() {};

// class Countable {
//     private:
//         static int objAmount;
        
//     public:
//         Countable() {
//             objAmount += 1;
//         };
        
//         static int checkAmount();
// };

int Countable::objAmount = 0;

int Countable::checkAmount() {
    return objAmount;
}

// int main() {
//     std::cout << "# of Object = " << Countable::checkAmount() << std::endl;
//     std::cout << "_____________________________________________________" << std::endl;
    
//     Countable* perv = new Countable();
//     Countable vtor, tret, chet, pat;
    
//     std::cout << "# from obj 1 is -  " << perv->checkAmount() << std::endl;
//     std::cout << "# from Class is -  " << Countable::checkAmount() << std::endl;
//     std::cout << "_____________________________________________________" << std::endl;
    
//     return 0;
// }
