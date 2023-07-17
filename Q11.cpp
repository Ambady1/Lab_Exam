/*Create a class Series with integers x,n and float sum as members. Using parameterised constructors
initialize the object , and display . (sum=1+x^2+x^3+...)*/
#include <iostream>
#include<cmath>
using namespace std;

class Series
{
    int x, n;
    float sum;

public:
    // Parameterized Constructor to initialize the object
    Series(int a, int b)
    {
        x = a;
        n = b;
        sum = 0;
    }

    void display()
    {
        for(int i=0;i<=n;i++)
        {
            sum+=pow(x,i);
        }
        cout<<"The sum of series 1 + 2^2 + 2^3 + ......2^n when n=4 is :\n"<<sum<<endl;
    }
};
int main()
{
    // Passing values to parameterized constructor
    Series S(2, 4);
    S.display();
    return 0;
}