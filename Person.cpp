#include "Person.hpp"
#include <iostream>
using namespace std;
Person::Person(){
    name=new string[5];
    ID=new int[5];
     age=new int[5];
};
void Person::setName(string x,int i){
    name[i]=x;
};
void Person::setAge(int x,int i){
    age[i]=x;
};
void Person::setID(int x,int i){
    ID[i]=x;
};
/*void Person::setAppointment(int h,int m){
    
};*/

string Person::getName(int i){
    return name[i];
};
int Person::getAge(int i){
    return age[i];
};
int Person::getID(int i){
    return ID[i];
};

