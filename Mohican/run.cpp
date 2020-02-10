#include "iostream"
#include "Mohican.h"

int main() {
    // std::cout << "Class # " <<  Mohican::lastID;
    // std::cout << "  " <<  Mohican::lastMohican << std::endl;
    // Mohican::initCheck();
    
    
    Mohican* per1 = new Mohican();
    Mohican* per2 = new Mohican("Vtoriy");
    Mohican* per3 = new Mohican("Schuk");
    Mohican* per4 = new Mohican("Schuk");
    
    std::cout << *per1 << std::endl;
    std::cout << *per2 << std::endl;
    std::cout << *per3 << std::endl;
    std::cout << *per4 << std::endl;
    
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << *per1;
    if ( per1->getPrev() == NULL ) {
        std::cout << " with:    PREV=" << per1->getPrev();
    } else {
        std::cout << " with:    PREV=" << *per1->getPrev();
    }
    if ( per1->getNext() == NULL ) {
    std::cout << "    NEXT=" << per1->getNext() << std::endl;
    } else {
        std::cout << "    NEXT=" << *per1->getNext() << std::endl;
    }
    std::cout << "---------------------------------------------------------" << std::endl;
    
    
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << *per2;
    if ( per2->getPrev() == NULL ) {
        std::cout << " with:    PREV=" << per2->getPrev();
    } else {
        std::cout << " with:    PREV=" << *per2->getPrev();
    }
    if ( per2->getNext() == NULL ) {
    std::cout << "    NEXT=" << per2->getNext() << std::endl;
    } else {
        std::cout << "    NEXT=" << *per2->getNext() << std::endl;
    }
    std::cout << "---------------------------------------------------------" << std::endl;
    
    
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << *per3;
    if ( per3->getPrev() == NULL ) {
        std::cout << " with:    PREV=" << per3->getPrev();
    } else {
        std::cout << " with:    PREV=" << *per3->getPrev();
    }
    if ( per3->getNext() == NULL ) {
    std::cout << "    NEXT=" << per3->getNext() << std::endl;
    } else {
        std::cout << "    NEXT=" << *per3->getNext() << std::endl;
    }
    std::cout << "---------------------------------------------------------" << std::endl;
    
    
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << *per4;
    if ( per4->getPrev() == NULL ) {
        std::cout << " with:    PREV=" << per4->getPrev();
    } else {
        std::cout << " with:    PREV=" << *per4->getPrev();
    }
    if ( per4->getNext() == NULL ) {
    std::cout << "    NEXT=" << per4->getNext() << std::endl;
    } else {
        std::cout << "    NEXT=" << *per4->getNext() << std::endl;
    }
    std::cout << "---------------------------------------------------------" << std::endl;
    // delete per2;
    
    std::cout << "  " <<  *Mohican::lastMohican << std::endl;
    std::cout << "The last Mohican is(new) : " << *Mohican::getLastMohican() << std::endl;
    
    return 0;
}
