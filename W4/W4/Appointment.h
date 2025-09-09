#pragma once
#include <string>
using namespace std;

class Patient;
class Doctor;

class Appointment {
private:
    string date;
    string time;
    string reason;
    string status;
    Patient* patient;
    Doctor* doctor;

public:
    Appointment(string d, string t, string r, Patient* p, Doctor* doc);

    void setStatus(const string& s);
    void displayInfo() const;
};
