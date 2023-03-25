#ifndef Mechanic_hpp
#define Mechanic_hpp
#include <iostream>
#include "Person.hpp"

class Mechanic:public Person{
protected:
    struct mech{
        string mechanicname;
        int mechanicID;
        int age;
        appointment ap[25];
        int appointmentsPerMechanic=0;
    };
    mech *f;
    
public:
    Mechanic();
    void generateID();
    void printMechanicInfo(int);
    bool isAvailable(mech,appointment);
};
#endif
