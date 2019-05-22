#include <iostream>
using namespace std;

// A function that takes a string and checks if is a number
bool checkNumber(string);

int main(void) {
    string str;
    
    cout << "Enter a number: " << endl;
    cin >> str;
    
    if (checkNumber(str))
        cout << "The input is a number!" << endl;
    else 
        cout << "Te input is not a number!" << endl;
    
    return 0;
}

bool checkNumber(string str) {
    bool isNumber = true;
    
    for (int i = 1; i < str.length(); i++) {
        
        // Check with ASCII numbers if is a digit
        if (!(str[i] >= 48 && str[i] <= 57)) {
            isNumber = false;
            break; // If a character is not digit, break the for
        }
    }
    
    return isNumber;
}
