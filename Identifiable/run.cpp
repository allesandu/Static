#include <iostream>
#include "Identifiable.h"

int main() {
    // std::cout << "2 shift is = " << i << std::endl;
    
    std::cout << "Class # = " << Identifiable::lastID << std::endl;
    std::cout << "______________________________________________" << std::endl;
    
    Identifiable* one = new Identifiable("odin");
    Identifiable* two = new Identifiable(*one);
    Identifiable* three = new Identifiable("Tri");
    Identifiable* four = new Identifiable("Cheto");
    *two = *four;
    
    std::cout << "Class  # = " << Identifiable::lastID << std::endl;
    std::cout << "Object 1: name = " << one->getName() << "; # = " << one->getID() << std::endl;
    std::cout << "Object 2: name = " << two->getName() << "; # = " << two->getID() << std::endl;
    std::cout << "Object 3: name = " << three->getName() << "; # = " << three->getID() << std::endl;
    std::cout << "Object 4: name = " << four->getName() << "; # = " << four->getID() << std::endl;
    std::cout << "______________________________________________" << std::endl;
    
    return 0;
}
