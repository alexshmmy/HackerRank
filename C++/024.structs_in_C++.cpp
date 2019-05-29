#include <iostream>
#include <iomanip>

using namespace std;

// structure definition
struct complexData {
    double real; // real part
    double image; // imaginary part
};

// Given input from keyboard
void inputComplex(complexData &);

// Output print to the screen
void printComplex(complexData &);

int main(void) {
    complexData z; // variable of new type ComplexData

    // input function
    inputComplex(z);

    // call printStandard function
    printComplex(z);

    cout << endl;

    return(0);
}

void inputComplex(complexData &t) {
   cout << "Give the real part : ";
   cin >> t.real;

   cout << "Give the imaginary part : ";
   cin >> t.image;
}

void printComplex(complexData &t) {
   cout << "The complex number is : ";
   cout << setw(5)
        << t.real;

   if (t.image < 0)
      cout << t.image
           << "j";
   else
      cout << "+"
           << t.image
           << "j";
}
