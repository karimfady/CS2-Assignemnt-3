#include <iostream>
#include "Mechanic.hpp"
#include "Person.hpp"
Mechanic::Mechanic(){
    mech *f=new mech[3];
    
};

bool Mechanic::isAvailable(mech y,appointment l){
    for(int i=0;i<f[y.mechanicID].appointmentsPerMechanic;  i++)
    {
        if((l.hrs==f[y.mechanicID].ap[i].hrs)&&(l.mins==f[y.mechanicID].ap[i].mins))
        {
          
            return false;
        }
    }
    return true;
};

void Mechanic::printMechanicInfo(int r)
{
    cout<<"Mechanic Name: "<<f[r].mechanicname<<endl;
    cout<<"Mechanic ID: "<<f[r].mechanicID<<endl;
    cout<<"Mechanic Age: "<<f[r].age<<endl;
};
