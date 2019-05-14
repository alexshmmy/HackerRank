#include <iostream>
using namespace std;

// A function that takes a string and checks if the string is palindrome
int checkPalindrome(string Str) {
    int i = 0;
    int j = Str.length()-1;

    for ( ; i < j; i++, j--) {
        if (Str[i] != Str[j])
            return 0;
    }

    return 1;
}

// main program
int main(void) {
    string Str;

    // define a string
    Str = "aaaaaabcbaaaaaa";

    if (checkPalindrome(Str))
        cout << "The given string is palindrome!\n";
    else
        cout << "The given string is not palindrome!\n";

    return 0;
}
