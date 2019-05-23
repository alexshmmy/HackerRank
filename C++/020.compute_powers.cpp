#include <iostream>
using namespace std;

// a function that computes the power of an integer
double power(double, int);

int main(void) {
    double b; // b stands for the base
    int e; // e stands for the exponent

    cout << "Enter a number: " << endl;
    cin >> b;
    cout << "Enter the desired exponent: " << endl;
    cin >> e;

    if (b == 0)
        cout << "Base 0 is not allowed!" << endl;
    else
        cout << b << "^" << e << " = " << power(b, e) << endl;

    return 0;
}

double power(double base, int exponent) {
    double result = base;

    if (base == 0) {
        cout << "Base 0 is not allowed!" << endl;
        return -1;
    }

    for (int i = 2; i <= exponent; i++) {
        result *= base;
    }

    return result;
}
