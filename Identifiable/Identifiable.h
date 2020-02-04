#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

class Identifiable {
    private:
        int objID;
        std::string objName;

    public:
        static int lastID;
        
        Identifiable(const std::string name = "noOne");
        Identifiable(const Identifiable& copy);
        
        int getID() const;
        const std::string getName() const;
        Identifiable& operator=(const Identifiable& copy);
};

#endif // IDENTIFIABLE_H
