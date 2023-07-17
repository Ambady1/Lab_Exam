#include <iostream>
#include <string>

using namespace std;

class Textbook {
    string title;
    float price;
    char className;
    string subjectName;
    int pages;
    
    public:
        void readData() {
            cout << "Enter title: ";
            getline(cin >> ws, title);
    
            cout << "Enter price: ";
            cin >> price;
    
            cout << "Enter class (I-V): ";
            cin >> className;
    
            cout << "Enter subject name: ";
            cin >> subjectName;
    
            cout << "Enter number of pages: ";
            cin >> pages;
        }
    
        void displayData() const {
            cout << "Title: " << title << endl;
            cout << "Price: " << price << endl;
            cout << "Class: " << className << endl;
            cout << "Subject Name: " << subjectName << endl;
            cout << "Number of Pages: " << pages << endl;
        }
};

int main() {
    Textbook obj;
    Textbook *textbookPtr;
    textbookPtr = &obj;

    textbookPtr->readData();

    cout << "\nTextbook Details:" << endl;
    textbookPtr->displayData();

    delete textbookPtr;

    return 0;
}
