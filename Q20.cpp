/*Create a class student with roll no, name and branch and type(UG-1/PG-0)as data members.
Derive two classes UGstudent and PGstudent.UGstudent has semester no(1-8) and 5 marks(each
out of 60) as members.PGstudent has string specialization, string year(1-2), 4 marks(each out of
60). Derive a class college_Result form UGstudent and PGstudent. Create an object of
college_Result and call respective mark calculations based on the value of type(UG/PG). Use
appropriate member functions in each class.*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int rollno;
    string name, branch, type;

public:
    void getStudent()
    {
        cout << "Enter roll no : " << endl;
        cin >> rollno;
        cout << "Enter name\n";
        cin >> name;
        cout << "Branch : \n";
        cin >> branch;
    }
    void putResult()
    {
        cout << "/nRoll : " << rollno << endl
             << "Name : " << name << endl
             << "Branch : " << branch << endl;
    }
};

class UGstudent : virtual protected Student
{
protected:
    int semno, mark1, mark2, mark3, mark4, mark5;

public:
    void getUGresult()
    {
        getStudent();
        type = 1;
        cout << "Semester : " << endl;
        cin >> semno;
        cout << "Mark 1 : " << endl;
        cin >> mark1;
        cout << "Mark 2 : " << endl;
        cin >> mark2;
        cout << "Mark 3 : " << endl;
        cin >> mark3;
        cout << "Mark 4 : " << endl;
        cin >> mark4;
        cout << "Mark 5 : " << endl;
        cin >> mark5;
    }
    void putUGResult()
    {
        putResult();
        cout << "Semester : " << semno << endl
             << "Mark 1 : " << mark1 << endl
             << "Mark 2 : " << mark2 << endl
             << "Mark 3 : " << mark3 << endl
             << "Mark 4 : " << mark4 << endl
             << "Mark 5 : " << mark5 << endl
             << "Total : " << mark1 + mark2 + mark3 + mark4 + mark5;
    }
};

class PGstudent : virtual protected Student
{
protected:
    string specialization, year;
    int mark1, mark2, mark3, mark4;

public:
    void getPGresult()
    {
        getStudent();
        cout << "Enter specialization\n";
        cin >> specialization;
        cout << "Enter year\n";
        cin >> year;
        cout << "Mark 1 : " << endl;
        cin >> mark1;
        cout << "Mark 2 : " << endl;
        cin >> mark2;
        cout << "Mark 3 : " << endl;
        cin >> mark3;
        cout << "Mark 4 : " << endl;
        cin >> mark4;
    }

    void putPGResult()
    {
        putResult();
        cout << "Mark 1 : " << mark1 << endl
             << "Mark 2 : " << mark2 << endl
             << "Mark 3 : " << mark3 << endl
             << "Mark 4 : " << mark4 << endl
             << "Total : " << mark1 + mark2 + mark3 + mark4;
    }
};

class College_result : public UGstudent, public PGstudent
{
public:
    College_result(int x)
    {
        if (x == 1)
        {
            getUGresult();
            putUGResult();
        }
        else if (x == 0)
        {
            getPGresult();
            putPGResult();
        }
    }
};
int main()
{
    College_result C1(1);
    College_result C2(0);
    return 0;
}