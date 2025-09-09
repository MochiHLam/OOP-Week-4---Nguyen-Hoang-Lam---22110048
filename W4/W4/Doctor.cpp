#include "Doctor.h"
#include "Appointment.h"
#include <iostream>
using namespace std;

//Constructor for doctor
Doctor::Doctor(string n, int i, string s) {
    name = n;
    id = i;
    specialty = s;
    appointmentCount = 0;
}

//Destructor for doctor
Doctor::~Doctor() {
    //Clean up doctor data
    cout << "Doctor " << name << " destructor called" << endl;
}

//Add appointment to doctor
void Doctor::addAppointment(Appointment* app) {
    if (appointmentCount < 10) {
        appointments[appointmentCount] = app;
        appointmentCount++;
    }
}

//Display doctor information
void Doctor::displayInfo() const {
    cout << "=== Doctor Info ===" << endl;
    cout << "Doctor Name : " << name << endl;
    cout << "ID          : " << id << endl;
    cout << "Specialty   : " << specialty << endl;
    cout << "Appointments:" << endl;
    if (appointmentCount == 0) {
        cout << "  No appointments yet" << endl;
    }
    else {
        for (int i = 0; i < appointmentCount; i++) {
            appointments[i]->displayInfo();
        }
    }
    cout << "------------------------------" << endl;
}

//Getters
string Doctor::getName() const { return name; }
int Doctor::getId() const { return id; }
string Doctor::getSpecialty() const { return specialty; }
