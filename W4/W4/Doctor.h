#pragma once
#include <string>
using namespace std;

// Forward declaration
class Appointment;

class Doctor {
private:
    string name;
    int id;
    string specialty;

    Appointment* appointments[10];
    int appointmentCount;

public:
    Doctor(string n, int i, string s);

    // Add appointment linked to doctor
    void addAppointment(Appointment* app);

    void displayInfo() const;

    // Getters
    string getName() const;
    int getId() const;
    string getSpecialty() const;
};
