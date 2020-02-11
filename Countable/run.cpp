#include <iostream>
#include "Countable.h"

int main() {
    std::cout << "# of Object N= " << Countable::getAmount() << std::endl;
    std::cout << "_____________________________________________________" << std::endl;
    
    Countable* perv = new Countable();
    Countable* vtor = new Countable(*perv);
    Countable* tret = new Countable();
    
    Countable cet;// = new Countable();
    Countable pyt, dtd, dd, gfg;// = new Countable();
    
    pyt = cet;
    // delete perv;
    
    std::cout << "# from obj 1 is -  " << perv->getAmount() << std::endl;
    std::cout << "# from Class is -  " << Countable::getAmount() << std::endl;
    std::cout << "_____________________________________________________" << std::endl;
    
    return 0;
}
