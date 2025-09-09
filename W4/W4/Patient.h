#pragma once
#include <string>
using namespace std;

// Forward declaration to avoid circular dependency
class Appointment;

class Patient {
private:
    string name;
    int id;
    int age;
    string medicalHistory[10];
    int historyCount;

    Appointment* appointments[10];
    int appointmentCount;

public:
    Patient(string n, int i, int a);

    // Add new medical record
    void addMedicalHistory(const string& record);

    // Add appointment linked to patient
    void addAppointment(Appointment* app);

    // Virtual so ChronicPatient can override
    virtual void scheduleAppointment(const string& date, const string& reason);

    // Display info
    virtual void displayInfo() const;

    // Getters
    string getName() const;
    int getId() const;
    int getAge() const;
};
