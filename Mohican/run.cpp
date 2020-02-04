#include "iostream"
#include "Mohican.h"

int main() {
    std::cout << "Class # " <<  Mohican::lastID << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    
    Mohican* per1 = new Mohican();
    Mohican* per2 = new Mohican("Vtoriy");
    
    std::cout << *per1 << std::endl;
    std::cout << *per2 << std::endl;
    
    std::cout << "Class # " <<  Mohican::lastID << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    
    std::cout << "The last Mohican is - " << *(per1->getLastMohican()) << std::endl;
    
    return 0;
}
