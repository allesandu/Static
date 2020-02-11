#ifndef MOHICAN_H
#define MOHICAN_H
#include <iostream>

class Mohican {
    private:
        std::string mohicanName;
        int mohicanID;
        Mohican* prev = NULL;
        Mohican* next = NULL;
    
    public:
        Mohican(const std::string& name = "noBody");
        ~Mohican();
        
        const std::string& getName() const;
        int getID() const;
        
        void setNext(Mohican* nextMohican);
        void setPrev(Mohican* prevMohican);
        
        Mohican* getPrev();
        Mohican* getNext();
        
        static int lastID;
        static Mohican* lastMohican;
        static Mohican* getLastMohican();
};

std::ostream& operator<<(std::ostream& out, const Mohican& mohican);

#endif // MOHICAN_H
