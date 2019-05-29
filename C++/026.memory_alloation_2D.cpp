#include <iostream>
#include <cstdlib>
#include <new>

#define N1 5
#define N2 5

using namespace std;

// Dynamically Allocate Memory for 1d AND 2D Arrays in C++
void array1D_print(void);
void array2D_print(void);

int main(void) {

    array1D_print();
    array2D_print();

	return 0;
}

void array1D_print(void) {
	int *A;

	A = new (nothrow) int [N1];

	if (A == NULL)
        cout << "Not enough memory to be allocated!" << endl;
    else {
        // assign values to allocated memory
        for (int i = 0; i < N1; i++)
            A[i] = rand() % 100;

        // print the 2D array
        for (int i = 0; i < N1; i++)
            cout << *(A+i) << " ";

        cout << endl;
        cout << endl;

        // deallocate memory
        delete [] A;
    }
}

void array2D_print(void) {
	int *A;

	A = new (nothrow) int [N1 * N2];

	// assign values to allocated memory
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++)
			*(A + i*N1 + j) = rand() % 100;

	// print the 2D array
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < N2; j++)
			cout << *(A + i*N1 + j) << " ";

		cout << endl;
	}

	// deallocate memory
	delete [] A;
}
