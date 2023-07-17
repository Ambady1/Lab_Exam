#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    float X, Y;

public:
    // Constructor to assign values
    Point(float x, float y)
    {
        X = x;
        Y = y;
    }

    //friend function to calculate distance
    friend float calcDist(Point , Point );
   
};

//Definition of friend function
float calcDist(Point a,Point b)
{
    float dist;
    dist = sqrt(((b.X - a.X)*(b.X - a.X)) - ((b.Y - a.Y)*(b.Y - a.Y)));
    return dist;
}
int main()
{
    Point u(5,2);
    Point v(8,3);
    cout<<"Distance : "<<calcDist(u,v);
    return 0;
}