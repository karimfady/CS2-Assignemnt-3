#ifndef Person_hpp
#define Person_hpp
#include <iostream>
using namespace std;
class Person{
public:
    struct appointment{
        int hrs,mins,appointmentNo,identifier;

    };
    appointment z;
    string *name;
    int *ID;
    int *age;
    //appointment *a;
    appointment *appt;
    int *mechanicID;
    string *mechname;
    string m;
    int appointmentNo;
    //assuming the number of mechanic available are 3
    int n=3;
    int mechnum;
    int appointments;

    Person();
    void setName(string,int);
    void setAge(int,int);
    void setID(int,int);
    void setAppointment(int,int);
    string getName(int);
    int getAge(int);
    int getID(int);
  
};      
#endif

