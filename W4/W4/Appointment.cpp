#include "Appointment.h"
#include "Patient.h"
#include "Doctor.h"
#include <iostream>
using namespace std;

//Constructor for appointment
Appointment::Appointment(string d, string t, string r, Patient* p, Doctor* doc) {
    date = d;
    time = t;
    reason = r;
    status = "Scheduled";
    patient = p;
    doctor = doc;

    if (patient) patient->addAppointment(this);
    if (doctor) doctor->addAppointment(this);
}

//Destructor for appointment
Appointment::~Appointment() {
    //Clean up appointment data
    cout << "Appointment on " << date << " destructor called" << endl;
}

//Set status function
void Appointment::setStatus(const string& s) {
    status = s;
}

//Display appointment information
void Appointment::displayInfo() const {
    cout << "=== Appointment Info ===" << endl;
    cout << "Appointment Date : " << date << endl;
    cout << "Time             : " << time << endl;
    cout << "Reason           : " << reason << endl;
    cout << "Status           : " << status << endl;
    cout << "------------------------------" << endl;
}
