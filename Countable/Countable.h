#ifndef COUNTABLE_H
#define COUNTABLE_H

class Countable {
    private:
        static int objAmount;
        
    public:
        Countable();
        static int checkAmount();
        ~Countable();
};

#endif // COUNTABLE_H