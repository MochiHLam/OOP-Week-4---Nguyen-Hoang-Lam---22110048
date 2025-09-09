#include "ChronicPatient.h"
#include <iostream>
using namespace std;

//Constructor for chronic patient
ChronicPatient::ChronicPatient(string n, int i, int a, string ct, string lc)
    : Patient(n, i, a) {
    conditionType = ct;
    lastCheckUpDate = lc;
}

//Destructor for chronic patient
ChronicPatient::~ChronicPatient() {
    //Clean up chronic patient data
    cout << "Chronic patient " << conditionType << " destructor called" << endl;
}

//Update last checkup date
void ChronicPatient::updateLastCheckup(const string& date) {
    lastCheckUpDate = date;
}

//Override schedule appointment (special rule for chronic patients)
void ChronicPatient::scheduleAppointment(const string& date, const string& reason) {
    cout << "Chronic patient scheduling..." << endl;
    cout << "Condition: " << conditionType << endl;
    cout << "Next appointment: " << date << " - " << reason << endl;
}

//Display chronic patient information
void ChronicPatient::displayInfo() const {
    cout << "=== Chronic Patient Info ===" << endl;
    Patient::displayInfo();
    cout << "Condition Type : " << conditionType << endl;
    cout << "Last Checkup   : " << lastCheckUpDate << endl;
    cout << "------------------------------" << endl;
}
