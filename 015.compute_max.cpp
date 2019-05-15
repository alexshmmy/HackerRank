#include <iostream>
#include <iomanip>

// Program: Given three double numbers from keyboard input, the program returns through a function
// the maximum of the three

using namespace std;

// Function that accepts 3 double numbers and returns the maximum of them

double maxim(double x1, double x2, double x3) {
    double max  = x1;

    if (x2 > max)
        max = x2;

    if (x3 > max)
        max = x3;

    return(max);
}

int main(void) {
    double x, y, z;

    cout << "Insert the first number : ";
    cin  >> x;
    cout << "Insert the second number : ";
    cin  >> y;
    cout << "Insert the third number : ";
    cin  >> z;

    cout << "The maximum is "
        << setw(4)
        << maxim(x, y, z)
        << endl;

    return(0);
}
