#include <iostream>
#include <fstream>
#include <string>
#include "Person.hpp"
#include "Customer.hpp"
#include "Mechanic.hpp"
#include "Queue.hpp"
using namespace std;
int main() {
    Customer a;
   a.enterAppointment();
    a.sortArray();
    a.printAppointmentsReserved();
    return 0;
}

