#include <iostream>
using namespace std;

class Time
{
    int hours, minutes;

public:
    void getData()
    {
        cout << "Enter original time in 24 hours\n";
        cin >> hours >> minutes;
    }

    void addTime(int m1)
    {
        int total_minutes = hours * 60 + minutes + m1;
        int new_hours = total_minutes / 60;
        int new_minutes = total_minutes % 60;
        cout << "\nNew time : " << new_hours << " : " << new_minutes << endl;
    }

    void addTime(int m2, int hrs)
    {
        int total_minutes = hours * 60 + minutes + (hrs * 60) + m2;
        int new_hours = total_minutes / 60;
        int new_minutes = total_minutes % 60;
        cout << "\nNew time : " << new_hours << " : " << new_minutes << endl;
    }
};

int main()
{
    Time T1;
    int min, hrs;
    T1.getData();

    cout << "Enter additional minutes: ";
    cin >> min;
    T1.addTime(min);

    cout << "Enter additional minutes and hours: ";
    cin >> min >> hrs;
    T1.addTime(min, hrs);

    return 0;
}
