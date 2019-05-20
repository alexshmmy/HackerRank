#include <iostream>
#include <stdlib.h>
using namespace std;

// c++ program implenting a simple calculator

int main(void) {
    double var1, var2;
    
    cout << "Enter first number: " << endl;
    cin >> var1;
    
    cout << "Enter second number: " << endl;
    cin >> var2;
    
    cout << "What do you want to do with the numbers?" << endl;
    cout << " + - add" << endl;
    cout << " - - substract" << endl;
    cout << " * - multiply" << endl;
    cout << " / - divide" << endl;
    
    char decision;
    cin >> decision;
    
    
    // clear the screen
    system("cls");
    
    switch (decision) {
        case '+' : {
            cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
            break;
        }
        case '-' : {
            cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
            break;
        }
        case '*' : {
            cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
            break;
        }
        case '/' : {
            if (var2) {
                cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
                break;
            }
            else {
                cout << "You cannot divide by zero!";
                break;
            }
        }
        default :
            cout << "You typed worng character!";
    }
     
    return 0;
}
