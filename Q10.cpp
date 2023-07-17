#include <iostream>
using namespace std;

class Fibonacci {
private:
    int series[100], length;

public:
    Fibonacci(int n) {
        length = n;
    }

    void generateSeries() {
        series[0] = 0;
        series[1] = 1;

        for (int i = 2; i < length; i++) {
            series[i] = series[i - 1] + series[i - 2];
        }
    }

    void displaySeries() const {
        cout << "Fibonacci Series (" << length << " terms): ";
        for (int i = 0; i < length; i++) {
            cout << series[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int numTerms;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> numTerms;

    Fibonacci fib(numTerms);
    fib.generateSeries();
    fib.displaySeries();

    return 0;
}
