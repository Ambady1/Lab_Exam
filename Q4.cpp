#include <iostream>
#include <algorithm>//To reverse string
#include <string>
using namespace std;

class Numstring
{
    // private data members
    int num;
    string str;

public:
    void findPalindrome(Numstring &a)
    {
        a.palindrome(num);
        a.palindrome(str);
    }
    Numstring()
    {
        cout << "Enter a number\n";
        cin >> num;
        cout << "Enter a string\n";
        cin.ignore(256, '\n');
        getline(cin, str);
    }
    // public functions-overloaded palindrome functions
    // For number
    void palindrome(int n)
    {
        // Logic to check palindrome of number
        int copy, digit, rev = 0;
        copy = n;
        while (copy != 0)
        {
            digit = copy % 10;
            copy = copy / 10;
            rev = rev * 10 + digit;
        }
        if (rev == n)
        {
            cout << "The number is a palindrome\n";
        }
        else
        {
            cout << "The number is not a palindrome\n";
        }
    }

    // For string
    void palindrome(string s)
    {
        string copy = s;
        reverse(copy.begin(), copy.end());
        if (copy == s)
        {
            cout << "The string is a palindrome\n";
        }
        else
        {
            cout << "The string is not a palindrome\n";
        }
    }
};
int main()
{
    Numstring N;
    N.findPalindrome(N);
    return 0;
}