#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    int patientID;
    string patientName;
    int consultationFee;

public:

    // Register patient
    void registerPatient()
    {
        cout << "Enter Patient ID: ";
        cin >> patientID;

        cout << "Enter Patient Name: ";
        cin >>  patientName;

        cout << "Enter Consultation Fee: ";
        cin >> consultationFee;
    }

   
    int calculateCharges()
    {
        return consultationFee;
    }


    void display()
    {
        cout << "\n--- Patient Information ---" << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Consultation Charges: "
             << calculateCharges() << endl;
    }
};

int main()
{
    Patient p;

    p.registerPatient();

    p.display();

    return 0;
}