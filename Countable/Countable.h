#ifndef COUNTABLE_H
#define COUNTABLE_H

class Countable {
    private:
        static int objAmount;
        
    public:
        Countable();
        ~Countable();
        
        Countable(const Countable& copy);
        Countable& operator=(const Countable& copy);
        
        static int getAmount();
};

#endif // COUNTABLE_H
