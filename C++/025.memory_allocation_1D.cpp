#include <iostream>

void memoryAllocation(int, int);

using namespace std;

int main(void) {
    int x, n;

    cout << "How many numbers would you like to type? ";
    cin >> x;

    memoryAllocation(x, n);

    return 0;
}

void memoryAllocation(int i, int n) {
    // memory allocation
    int *p;

    p = new (nothrow) int [i];

    if (p == NULL)
        cout << "Error: memory could not be allocated";
    else {

        for (n = 0; n < i; n++) {
            cout << "Enter number: ";
            cin >> p[n];
        }

        cout << endl;
        cout << "You have entered: ";

        for (n = 0; n < i; n++)
            cout << p[n] << ", ";
   }

   cout << endl;

   // return memory to the system
   delete [] p;
}
