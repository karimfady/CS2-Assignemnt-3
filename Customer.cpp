#include "Customer.hpp"
#include "Queue.hpp"
#include <iostream>
#include <fstream>
using namespace std;
Customer::Customer(){
  //assuming the number of mechanic available n are 3
    size=25;
    f=new mech[3];
    appt=new appointment[25];//declaring size of dynamic array with 25 as if there can only be 25 appointments
    appointments=0;
    appointmentNo=0;
    f[0].mechanicname="Ayman";
    f[0].age=37;
    f[0].mechanicID=0;
    f[1].mechanicname="Mai";
    f[1].age=28;
    f[1].mechanicID=1;
    f[2].mechanicname="Khaled";
    f[2].age=24;
    f[2].mechanicID=2;
};
void Customer::printAppointmentsReserved(){
    //string z;
    if(appointments==0)
        cout<<"No appointments reserved"<<endl;
    else{
        cout<<endl;
        cout<<"Appoimtments reserved: "<<endl;
        cout<<"--------------------------------------"<<endl;
        for(int i=0;i<appointments;  i++)
        {
            cout<<"Appointment Number: "<<appt[i].appointmentNo<<endl;
            if(appt[i].mins<10)
            cout<<"Time: "<<appt[i].hrs<<":0"<<appt[i].mins<<endl;
            else  cout<<"Time: "<<appt[i].hrs<<":"<<appt[i].mins<<endl;
            printMechanicInfo(appt[i].identifier);
            cout<<"--------------------------------------"<<endl;
          
        }
    }
};
void Customer::enterAppointment(){
    string z; string r;
    if(!appointmentsFull())
        cout<<"Sorry, we reached the maimum number of appointments today";
    else{
        cout<<"Do you want to reserve appointments or print the reserved appointments (print/reserve): ";
        cin>>r;
        if(r=="print")
            printAppointmentsReserved();
        cout<<"Do you want to reserve an appointment (yes/no): ";
        cin>>z;
        {
            while(z!="no")
            {
                
                cout<<"What hour would you like to reserve: ";
                cin>>appt[appointments].hrs;
                cout<<"At what minute: ";
                cin>>appt[appointments].mins;
                appt[appointments].appointmentNo=appointments;
                assignMechanic();
                cout<<"Do you want to add another appointment (yes/no): ";
                cin>>z;
            }
        }
    }
};


void Customer::assignMechanic(){
    int y;
    srand(time(0));
    if((!isAvailable(f[0],appt[appointments]))&&(!isAvailable(f[1],appt[appointments]))&&(!isAvailable(f[2],appt[appointments])))
    {
        cout<<"NO MECHANICS AVAILABLE AT THAT TIME, APPOINTMENT CANCELLED "<<endl;
    }
    
    y=x%3;
    if((y==0)&&(isAvailable(f[0],appt[appointments])))
    {
        appt[appointments].identifier=0;
        f[0].ap[f[0].appointmentsPerMechanic].hrs=appt[appointments].hrs;
        f[0].ap[f[0].appointmentsPerMechanic].mins=appt[appointments].mins;
        f[0].appointmentsPerMechanic++;
        appointments++;
    }
    if((y==1)&&(isAvailable(f[1],appt[appointments])))
    {
        appt[appointments].identifier=1;
        f[1].ap[f[1].appointmentsPerMechanic].hrs=appt[appointments].hrs;
        f[1].ap[f[1].appointmentsPerMechanic].mins=appt[appointments].mins;
        f[1].appointmentsPerMechanic++;
        appointments++;
    }
    if((y==2)&&(isAvailable(f[2],appt[appointments])))
    {
        appt[appointments].identifier=2;
        f[2].ap[f[2].appointmentsPerMechanic].hrs=appt[appointments].hrs;
        f[2].ap[f[2].appointmentsPerMechanic].mins=appt[appointments].mins;
        f[2].appointmentsPerMechanic++;
        appointments++;
    }
    x++;
};
void Customer::sortArray(){
    appointment temp;
    for(int i=0;i<(appointments-1);i++)
    {
        for(int i=0;i<(appointments-1);i++)
        {
            if(appt[i].hrs>appt[i+1].hrs)
            {
                temp=appt[i];
                appt[i]=appt[i+1];
                appt[i+1]=temp;
                
            }
            if(appt[i].hrs==appt[i+1].hrs)
                if(appt[i].mins>appt[i+1].mins)
                {
                    temp=appt[i];
                    appt[i]=appt[i+1];
                    appt[i+1]=temp;
                }
            
        }}
};
    bool Customer::appointmentsFull(){
        if(appointments==25)
            return false;
        else return true;
    };
void Customer::putInQueue(){
    Queue<appointment> r;
    for(int i=0;i<appointments;i++)
    {
        r.push(appt[i]);
    }
};
