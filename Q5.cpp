#include <iostream>
#include <string>

using namespace std;

class Bill {
protected:
    int patientID;
    string patientName;
    string department;
    int billNo;
    float billAmount;

public:
    Bill(int id, const string& name, const string& dept, int billNum) : patientID(id), patientName(name), department(dept), billNo(billNum) {}

    virtual float calculateBill() const {
        return billAmount;
    }

    virtual void displayBill() const {
        cout << "Patient ID: " << patientID << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Department: " << department << endl;
        cout << "Bill No: " << billNo << endl;
        cout << "Bill Amount: " << calculateBill() << endl;
    }
};

class PatientBill : public Bill {
private:
    int numDays;
    float roomCharge;
    float canteenFee;
    float labFee;
    float pharmacyFee;

public:
    PatientBill(int id, const string& name, const string& dept, int billNum, int days, float room, float canteen, float lab, float pharmacy)
        : Bill(id, name, dept, billNum), numDays(days), roomCharge(room), canteenFee(canteen), labFee(lab), pharmacyFee(pharmacy) {}

    float calculateBill() const override {
        float totalBill = roomCharge * numDays + canteenFee + labFee + pharmacyFee;
        return totalBill;
    }

    void displayBill() const override {
        cout << "=== Patient Bill ===" << endl;
        Bill::displayBill();
        cout << "Number of Days: " << numDays << endl;
        cout << "Room Charge: " << roomCharge << endl;
        cout << "Canteen Fee: " << canteenFee << endl;
        cout << "Lab Fee: " << labFee << endl;
        cout << "Pharmacy Fee: " << pharmacyFee << endl;
    }
};

class OutpatientBill : public Bill {
private:
    float registrationFee;
    float consultationFee;
    float medicineFee;

public:
    OutpatientBill(int id, const string& name, const string& dept, int billNum, float registration, float consultation, float medicine)
        : Bill(id, name, dept, billNum), registrationFee(registration), consultationFee(consultation), medicineFee(medicine) {}

    float calculateBill() const override {
        float totalBill = registrationFee + consultationFee + medicineFee;
        return totalBill;
    }

    void displayBill() const override {
        cout << "=== Outpatient Bill ===" << endl;
        Bill::displayBill();
        cout << "Registration Fee: " << registrationFee << endl;
        cout << "Consultation Fee: " << consultationFee << endl;
        cout << "Medicine Fee: " << medicineFee << endl;
    }
};

int main() {
    PatientBill pBill(1234, "Abhinav C V", "Cardiology", 1001, 5, 2500.0, 500.0, 1500.0, 1000.0);
    pBill.displayBill();

    cout << endl;

    OutpatientBill opBill(5678, "Jhonny S", "Dermatology", 2002, 100.0, 300.0, 50.0);
    opBill.displayBill();

    return 0;
}
