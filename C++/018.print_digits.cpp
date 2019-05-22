#include <iostream>
using namespace std;

// A program that accepts a number from the keyboard and retursn the number of digits

int main(void) {
    int nr; // 4 bytes number memory for the number
    unsigned int digits; // 2 bytes number for the digits
    
    cout << "Please give a number :" << endl;
    cin >> nr;
    
    int x = nr;
    digits = 0;
    
    while (x != 0) {
        x /= 10;
        digits ++;
    }
    
    cout << "The number " << nr << " has " << digits << " digits!" << endl;

    return 0;
}
