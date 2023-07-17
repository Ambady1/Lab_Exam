#include <iostream>
using namespace std;

class Weight {
    int kilogram;
    int gram;
    
    public:
        void readData() {
            cout << "Enter kilograms: ";
            cin >> kilogram;
    
            cout << "Enter grams: ";
            cin >> gram;
        }
    
        void displayData() const {
            cout << "Weight: " << kilogram << " kilograms " << gram << " grams" << endl;
        }
    
        friend int operator+(const Weight& obj, int value);
};

int operator+(const Weight& obj, int value) {
    int totalGrams = obj.kilogram * 1000 + obj.gram + value;
    return totalGrams;
}

int main() {
    Weight obj;
    obj.readData();

    int additionalGrams;
    cout << "Enter additional grams: ";
    cin >> additionalGrams;

    int totalGrams = obj + additionalGrams;

    cout << "Total weight in grams: " << totalGrams << " grams" << endl;
    cout << "Total weight in kilograms: " << totalGrams/1000 << " kg" << endl;

    return 0;
}
