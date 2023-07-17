#include <iostream>
#include <cmath>
using namespace std;

class Quadratic
{
private:
    // Variables to store coeffeciants of x
    int a, b, c;

public:
    // Method to get values to x1,x2,x3
    void get()
    {
        cout << "\nEnter the coeffiecients of x^2, x and constant respectively\n";
        cin >> a >> b >> c;
    }

    // Friend function to calculate roots
    friend void calcRoots(Quadratic);
};

void calcRoots(Quadratic x)
{
    float D, root1, root2;
    cout << "\nThe given quadratic equation is : \n";
    cout << x.a << "x^2 + " << x.b << "x + " << x.c << endl;

    D = sqrt(((x.b * x.b) - (4 * x.a * x.c)));
    root1 = (-x.b + D)/ (2 * x.a);
    root2 = (-x.b - D)/ (2 * x.a);

    cout<<"\nThe roots are : \n Root 1 = "<<root1<<"\nRoot 2 = "<<root2<<endl;
}
int main()
{
    Quadratic q1;
    q1.get();
    calcRoots(q1);

    return 0;
}