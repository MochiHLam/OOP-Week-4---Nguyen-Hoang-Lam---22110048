#include "Patient.h"
#include "Appointment.h"
#include <iostream>
using namespace std;

//Constructor for patient
Patient::Patient(string n, int i, int a) {
    name = n;
    id = i;
    age = a;
    historyCount = 0;
    appointmentCount = 0;
}

//Destructor for patient
Patient::~Patient() {
    //Clean up patient data
    cout << "Patient " << name << " destructor called" << endl;
}

//Add medical history to patient
void Patient::addMedicalHistory(const string& record) {
    if (historyCount < 10) {
        medicalHistory[historyCount] = record;
        historyCount++;
    }
}

//Add appointment to patient
void Patient::addAppointment(Appointment* app) {
    if (appointmentCount < 10) {
        appointments[appointmentCount] = app;
        appointmentCount++;
    }
}

//Default schedule appointment (normal patient)
void Patient::scheduleAppointment(const string& date, const string& reason) {
    cout << "Patient " << name << " scheduled appointment on " << date
        << " for " << reason << endl;
}

//Display patient information
void Patient::displayInfo() const {
    cout << "=== Patient Info ===" << endl;
    cout << "Patient name  : " << name << endl;
    cout << "ID            : " << id << endl;
    cout << "Age           : " << age << endl;
    cout << "Medical history:" << endl;
    if (historyCount == 0) {
        cout << "  No records yet" << endl;
    }
    else {
        for (int i = 0; i < historyCount; i++) {
            cout << "  - " << medicalHistory[i] << endl;
        }
    }
    cout << "------------------------------" << endl;
}

//Getters
string Patient::getName() const { return name; }
int Patient::getId() const { return id; }
int Patient::getAge() const { return age; }
