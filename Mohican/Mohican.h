#ifndef MOHICAN_H
#define MOHICAN_H
#include <iostream>

class Mohican {
    private:
        std::string mohicanName;
        int mohicanID;
        Mohican* prev = nullptr;
        Mohican* current = NULL;
        Mohican* next = NULL;
        
        // void initCheck() {
        //     if ( Mohican::prev == NULL ) {
        //         std::cout "No person yet" << std::endl;
        //     }
        // }
    
    public:
        Mohican(const std::string& name = "noBody");
        ~Mohican();
        
        const std::string& getName() const;
        int getID() const;
        
        void setNext(Mohican* nextMohican);
        
        Mohican* getPrev();
        Mohican* getNext();
        
        static int lastID;
        static Mohican* lastMohican;
        static Mohican* getLastMohican();
        static void initCheck();
};

std::ostream& operator<<(std::ostream& out, const Mohican& mohican);

#endif // MOHICAN_H
