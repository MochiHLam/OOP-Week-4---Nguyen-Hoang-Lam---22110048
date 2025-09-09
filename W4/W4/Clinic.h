#pragma once
#include <string>
using namespace std;

// Forward declaration
class Patient;
class Doctor;
class Appointment;

class Clinic {
private:
    string name;
    Patient* patients[20];
    Doctor* doctors[10];
    Appointment* appointments[50];
    int patientCount;
    int doctorCount;
    int appointmentCount;

public:
    Clinic(string n);

    // Add patient
    void addPatient(Patient* p);

    // Add doctor
    void addDoctor(Doctor* d);

    // Add appointment
    void addAppointment(Appointment* a);

    // Display all info
    void displayInfo() const;
};
