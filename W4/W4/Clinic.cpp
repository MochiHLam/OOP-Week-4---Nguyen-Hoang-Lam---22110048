#include "Clinic.h"
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
#include <iostream>
using namespace std;

//Constructor for clinic
Clinic::Clinic(string n) {
    name = n;
    patientCount = 0;
    doctorCount = 0;
    appointmentCount = 0;
}

//Destructor for clinic
Clinic::~Clinic() {
    //Clean up clinic data
    cout << "Clinic " << name << " destructor called" << endl;
}

//Add patient to clinic
void Clinic::addPatient(Patient* p) {
    if (patientCount < 20) {
        patients[patientCount] = p;
        patientCount++;
    }
}

//Add doctor to clinic
void Clinic::addDoctor(Doctor* d) {
    if (doctorCount < 10) {
        doctors[doctorCount] = d;
        doctorCount++;
    }
}

//Add appointment to clinic
void Clinic::addAppointment(Appointment* a) {
    if (appointmentCount < 50) {
        appointments[appointmentCount] = a;
        appointmentCount++;
    }
}

//Display clinic info
void Clinic::displayInfo() const {
    cout << "=== Clinic Info ===" << endl;
    cout << "Clinic Name: " << name << endl;
    cout << "Patients:" << endl;
    if (patientCount == 0) cout << "  No patients yet" << endl;
    for (int i = 0; i < patientCount; i++) {
        patients[i]->displayInfo();
    }

    cout << "Doctors:" << endl;
    if (doctorCount == 0) cout << "  No doctors yet" << endl;
    for (int i = 0; i < doctorCount; i++) {
        doctors[i]->displayInfo();
    }

    cout << "Appointments:" << endl;
    if (appointmentCount == 0) cout << "  No appointments yet" << endl;
    for (int i = 0; i < appointmentCount; i++) {
        appointments[i]->displayInfo();
    }

    cout << "------------------------------" << endl;
}
