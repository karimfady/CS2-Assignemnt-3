#ifndef Customer_hpp
#define Customer_hpp
#include "Person.hpp"
#include "Mechanic.hpp"
#include <iostream>
using namespace std;
class Customer:public Mechanic
{
private:
    int size;//will assume that there is a maimum of 25 appointments per day
    int x=0;
public:
    Customer();
    void printMechanicsAvailable();
    void printAppointmentsReserved();
    void enterAppointment();
    void assignMechanic();
    void putInQueue();
    int checkAppointment();
    void sortArray();
    bool appointmentsFull();
};
#endif
