#include "Mohican.h"

Mohican::Mohican(const std::string name) {
    lastID += 1;
    lastMohican = this;
    this->mohicanName = name;
    this->mohicanID = lastID;
}

Mohican::~Mohican() {};

const std::string Mohican::getName() const {
    return this->mohicanName;
}

int Mohican::getID() const {
    return this->mohicanID;
}

std::ostream& operator<<(std::ostream& out, const Mohican& mohican) {
    out << "Person: <" << mohican.getName();
    out << "> has ID =[" << mohican.getID();
    out << "]" << std::endl;
}

int Mohican::lastID = 0;
Mohican* Mohican::lastMohican = NULL;

Mohican* Mohican::getLastMohican() {
    return Mohican::lastMohican;
}
