/* Create a class Height with data members feet and inches. Compare two Height objects by overloading
> operator.*/
#include <iostream>
using namespace std;

class Height
{
    float feet, inches;

public:
    void getData()
    {
        cout << "Enter the feet and inches\n";
        cin >> feet >> inches;
    }

    bool operator>(Height h)
    {
        if (feet * 12 + inches > h.feet * 12 + h.inches)
            return true;
        else
            return false;
    }
};
int main()
{
    Height h1, h2;
    h1.getData();
    h2.getData();
    if (h1 > h2)
        cout << "First object(h1) is greater than second(h2)";
    else
        cout << "Second object(h2) is greater than first(h1)";

    return 0;
}