#pragma once
#include "Patient.h"

class ChronicPatient : public Patient {
private:
    string conditionType;
    string lastCheckUpDate;

public:
    ChronicPatient(string n, int i, int a, string ct, string lc);

    // Update last checkup date
    void updateLastCheckup(const string& date);

    // Override appointment scheduling
    void scheduleAppointment(const string& date, const string& reason) override;

    // Override display info
    void displayInfo() const override;
};
