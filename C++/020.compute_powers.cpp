#include <iostream>
using namespace std;

// a function that computes the power of an integer
int power(int, int);

int main(void) {
    int b, e;

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

int power(int base, int exponent) {
    int result = base;

    if (base == 0) {
        cout << "Base 0 is not allowed!" << endl;
        return -1;
    }


    for (int i = 2; i <= exponent; i++) {
        result *= base;
    }

    return result;
}
