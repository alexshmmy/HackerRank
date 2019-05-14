# include <iostream>

using namespace std;

int main(void) {
    double ar[10];

    for (int i = 0; i < 10; i++) {
        cout << "Give a number " << i << ": ";
        cin >> ar[i];

	// replace 1 if an element is positive
	// replace -1 if an element is negative

        if (ar[i] >= 0)
            ar[i] = 1;
        else if (ar[i] < 0)
            ar[i] = -1;
    }

	// print the array
    for (int i = 0; i < 10; i++)
        cout << "Array is : " << ar[i] << endl;

    return 0;
}
