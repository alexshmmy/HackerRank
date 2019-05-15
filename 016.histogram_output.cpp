// Program: Histogram to the output with random input integers to an array

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <new>

using namespace std;

// define global variable N
const int N = 10;

int main(void) {
    int *x;
    int i, j;

    // memory allocation
    x = new (nothrow) int [N];

    // note that *(x+i) is equivalent to x[i]

    for (i = 0; i < N; i++)
        x[i] = 1 + rand() % 10;

    cout << "Element"
        << setw(13)
        << "Value"
        << setw(13)
        << "Histogram"
        << endl;

    for (i = 0; i < N; i++) {
        cout << setw(7)
           << i
           << setw(13)
           << x[i]
           << setw(9);

        for (j = 0; j < x[i]; j++)
            cout << "*";

        cout << endl;
    }

    // return memory to the system
    delete [] x;

    // indicate corrent termination
    return(0);
}
