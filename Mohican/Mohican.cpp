#include "Mohican.h"

Mohican::Mohican(const std::string& name) {
        lastID += 1;
        
        this->prev = lastMohican;
        this->current = this;
        if ( this->prev != NULL ) {
            this->prev->setNext(this);
        }
        lastMohican = this;
        
        this->mohicanName = name;
        this->mohicanID = lastID;
}

Mohican::~Mohican() {};

const std::string& Mohican::getName() const {
    return this->mohicanName;
}

int Mohican::getID() const {
    return this->mohicanID;
}

void Mohican::setNext(Mohican* nextMohican) {
    this->next = nextMohican;
}

Mohican* Mohican::getPrev() {
    return this->prev;
}

Mohican* Mohican::getNext() {
    return this->next;
}

std::ostream& operator<<(std::ostream& out, const Mohican& mohican) {
    out << "<" << mohican.getName() << ">";
    out << " [#" << mohican.getID() << "]";
}

int Mohican::lastID = 0;
Mohican* Mohican::lastMohican = NULL;

Mohican* Mohican::getLastMohican() {
    return Mohican::lastMohican;
}

void Mohican::initCheck() {
    if ( lastMohican == NULL ) {
        std::cout << "No person yet" << std::endl;
    }
}
