#include <iostream>
#include "Countable.h"

int main() {
    std::cout << "# of Object N= " << Countable::checkAmount() << std::endl;
    std::cout << "_____________________________________________________" << std::endl;
    
    Countable* perv = new Countable();
    Countable vtor, tret, chet, pat;
    
    std::cout << "# from obj 1 is -  " << perv->checkAmount() << std::endl;
    std::cout << "# from Class is -  " << Countable::checkAmount() << std::endl;
    std::cout << "_____________________________________________________" << std::endl;
    
    return 0;
}
