/*We want to store the information of different vehicles. Create a class named Vehicle with two
data members named mileage and price. Create its two subclasses
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel
type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air,
liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)
Make another two subclasses Audi and Ford of Car, each having a data member to store the
model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the
make-type.
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost,
warranty,seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS
bike.*/

#include <iostream>
#include<string>
using namespace std;

class Vehicle
{
protected:
    int mileage, price;
    public:
    Vehicle(int mil,int pri): mileage(mil),price(pri) {}
};

class Car : public Vehicle
{ 
    protected:
    string own_cost, warranty, seat_capa, fuel;
    public:
    Car(string cost, string warr,string seat, string f,int mil,int pri)
    : own_cost(cost),warranty(warr),seat_capa(seat),fuel(f),Vehicle(mil,pri) {}
};

class Bike : public Vehicle
{
    string cylinders, num_of_gears, cooling_type, wheeltype, tank_size;
};

class Audi : public Car
{
    string model;

    public:
    Audi(string mod,string cost, string warr,string seat, string f,int mil, int pri )
    : model(mod), Car( cost, warr,seat,f,mil,pri) {}

    void printDetails()
    {
        cout<<"Model : "<<model<<endl
        <<"Ownership Cost : "<<own_cost<<endl
        <<"Warranty : "<<warranty<<endl
        <<"Seat : "<<seat_capa<<endl
        <<"Fuel : "<<fuel<<endl
        <<"Mileage : "<<mileage<<endl
        <<"Price : "<<price<<endl;
    }
};

class Ford : public Car
{
    string model;
};

class Bajaj : public Bike
{
    string make_type;
};

class Tvs : public Bike
{
    string make_type;
};
int main()
{
    Audi A("Model_A","1400000","2 years","4 seater","Petrol",15,1000);
    A.printDetails();
    return 0;
}