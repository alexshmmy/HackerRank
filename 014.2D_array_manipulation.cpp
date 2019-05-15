#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    int x[16];
    int even[4][4], odd[4][4];

    // Initialize two 2D arrays 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            even[i][j] = -1;
            odd[i][j] = -1;
        }
    }

    // Give an array of 16 integers
    for (int i = 0; i < 16; i++) {
        cout << "Give element x[ " << i << " ] : ";
        cin >> x[i];
    }

    int k = 0;
    
    // Parse the array x and put the suitable elements int he odd
    // and even 2D arrays
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (x[k] % 2 == 0)
                even[i][j] = x[k];
            else
                odd[i][j] = x[k];

            k++;
        }
    }

    // Print matrix even[4][4] to the screen
    cout << "\n\nEven Matrix :\n" << endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j<4; j++) {
            cout << setw(4)
                << even[i][j];
        }
        cout << endl;
    }

    // Print matrix odd[4][4] to the screen
    cout << "\n\nOdd Matrix :\n" << endl;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
         cout << setw(4)
              << odd[i][j];
        }
        cout << endl;
    }

    cout << "\n"
        << endl;

    return(0);
}
