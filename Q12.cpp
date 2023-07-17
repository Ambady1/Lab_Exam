/*Create a class Customer with customer id, mobile number, bill number and bill amount. Create child
classes Water_bill and phone_bill .

water bill calculations: first 100 units-60 paise/unit, next 200 units -80 paise/unit, beyond 300 units-
90 paise/unit. All customers are charged a minimum of rs.50.

phone bill calculation: charge of STDcall – 90 paise/call, charge of ISDcall -Rs.1.25/call. Unlimited local
call -Rs.240. Total charge will be the sum of all three.*/

#include <iostream>
using namespace std;

class Customer
{
protected:
    int id, billno;
    float billamt;
    string mobno;

public:
    Customer(int Cid, string Cmobno, int Cbillno) : id(Cid), mobno(Cmobno), billno(Cbillno) {}

    void display()
    {
        cout << "Customer ID : " << id << endl
             << "Mobile : " << mobno << endl
             << "Bill number : " << billno << endl;
    }
};

class Water_bill : public Customer
{
    int waterunit, charge;

public:
    Water_bill(int Cid, string Cmobno, int Cbillno, int Cwaterunit)
        : Customer(Cid, Cmobno, Cbillno), waterunit(Cwaterunit) {}

    float calcWaterBill()
    {

        if (waterunit >= 0 && waterunit < 100)
            charge = 60;
        else if (waterunit >= 100 && waterunit < 300)
            charge = 80;
        else
            charge = 90;

        billamt = (waterunit * charge + 50) / 100;
        return billamt;
    }

    void displayWaterBill()
    {
        cout << "\n..........WATER BILL..........\n";
        display();
        cout << "WaterBill : " << calcWaterBill();
    }
};

class phone_bill : public Customer
{
    int stdCall, isdCall, unlimitedCall;

public:
    phone_bill(int Cid, string Cmobno, int Cbillno, int CstdCall, int CisdCall, int CunlimitedCall)
        : Customer(Cid, Cmobno, Cbillno), stdCall(CstdCall), isdCall(CisdCall), unlimitedCall(CunlimitedCall) {}

    float calcPhoneBill()
    {

        billamt = (stdCall * 90 + isdCall * 125 + unlimitedCall * 24000) / 100;
        return billamt;
    }

    void displayphoneBill()
    {
        cout << "\n..........PHONE BILL..........\n";
        display();
        cout << "Phone Bill : " << calcPhoneBill();
    }
};
int main()
{
    Water_bill W(1, "7736280419", 1, 150);
    W.displayWaterBill();
    phone_bill P(2, "9847265376", 1, 100, 50, 1);
    P.displayphoneBill();
    return 0;
}
