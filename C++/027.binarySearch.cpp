#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// binary search algorithm
int binarySearch(vector<int> &, int);

int main(void) {
    vector<int> A{-5, 2, 3, -4};

    // sort the array 
    sort(A.begin(), A.end());
    
    // check if an element is in the array
    cout << binarySearch(A, -4) << endl;

    return 0;
}

int binarySearch(vector<int> &A, int X) {
    // compute the length of the array
    int N = A.size();

    if (N == 0)
        return -1;

    int l = 0;
    int r = N-1;

    while (l <= r) {
        int m = (l+r) / 2;

        if (A[m] > X)
            r = m-1;
        else if (A[m] < X)
            l = m+1;
        else
            return m;
    }

    return -1;
}
