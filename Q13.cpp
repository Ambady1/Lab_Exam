#include <iostream>
using namespace std;
class Large
{
protected:
    int largest(int array[])
    {
        int largest = array[0];
        for (int i = 1; i < 10; i++)
        {
           if(array[i]>largest)
           largest = array[i];
        }
        return largest;
    }
};

class Small
{
protected:
    int smallest(int array[])
    {
        int small = array[0];
        for (int i = 1; i < 10; i++)
        {
           if(array[i]<small)
           small = array[i];
        }
        return small;
    }
};
class Array : public Large,public Small
{
    int array[10];

public:
    void getArray()
    {
        cout << "Enter the array elements\n";
        for (int i = 0; i < 10; i++)
            cin >> array[i];
    }

    void printResult()
    {
        cout << "The largest value : " << largest(array)<<endl;
        cout<<"The smallest value : "<<smallest(array)<<endl;
    }
};
int main()
{
    Array A;
    A.getArray();
    A.printResult();
    return 0;
}