#ifndef Queue_hpp
#define Queue_hpp
#include "Mechanic.hpp"
#include "Person.hpp"
#include <iostream>
using namespace std;
template <typename T>
class Queue:public Mechanic
{
    T *Q;
    int c=-1;
public:
    
    Queue(){
        Q=new T[25];
    };
    
    void push(T i){
        c++;
        if(c>=24)
            cout<<"Queue is full";
        else
        {
            Q[c]=i;
        }
    };
    
    void pop(){
        if(c==(-1))
        {
            cout<<"Queue is empty";
        }
        else
            c--;
        cout<<Q[appointments].hrs<<":"<<Q[appointments].mins;
    };
    
};
#endif
