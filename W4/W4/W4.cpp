#include <iostream>
#include "Patient.h"
#include "ChronicPatient.h"
#include "Doctor.h"
#include "Appointment.h"

using namespace std;

int main() {
    //Create object patient normal
    Patient p1("Alice", 1, 25);
    //Add medical history to patient
    p1.addMedicalHistory("Flu - 2023");
    p1.addMedicalHistory("Checkup - 2024");

    //Create object chronic patient
    ChronicPatient cp1("Bob", 2, 50, "Diabetes", "2024-01-15");
    //Add medical history to chronic patient
    cp1.addMedicalHistory("Diabetes check - 2023");

    //Create object doctor
    Doctor d1("Dr. Smith", 100, "Cardiology");

    //Create appointment objects
    Appointment a1("2024-09-10", "10:00 AM", "Routine Check", &p1, &d1);
    Appointment a2("2024-09-12", "02:00 PM", "Follow-up", &cp1, &d1);

    //Add appointments to doctor
    d1.addAppointment(&a1);
    d1.addAppointment(&a2);
    cout << endl;

    //Display information
    p1.displayInfo();
    cout << endl;

    cp1.displayInfo();
    cout << endl;

    d1.displayInfo();
    cout << endl;

    a1.displayInfo();
    a2.displayInfo();

    //Test scheduleAppointment
    cout << endl << "--- Schedule appointment test ---" << endl;
    p1.scheduleAppointment("2024-09-20", "General Checkup");
    cp1.scheduleAppointment("2024-09-25", "Diabetes follow-up");

    //Test update chronic patient
    cout << endl << "--- Update Last Checkup test ---" << endl;
    cp1.updateLastCheckup("2024-09-25");
    cp1.displayInfo();

    //Test setStatus
    cout << endl << "--- Change appointment status ---" << endl;
    a1.setStatus("Completed");
    a2.setStatus("Canceled");
    a1.displayInfo();
    a2.displayInfo();

    return 0;
}
