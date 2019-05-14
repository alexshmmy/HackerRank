#include <iostream>
using namespace std;

int main(void) {
    int X[10], Y[10];
    int i, count = 0;

    for (i = 0; i < 10; i++) {
        cout << "Give a number: ";
        cin >> X[i];

        if (X[i] >= 100) {
            Y[i] = X[i];
            count++;
        }
        else
            Y[i] = 100;
    }

    cout << "There are " << count << " elements in Y with value more than 100" << endl;

    return 0;
}
