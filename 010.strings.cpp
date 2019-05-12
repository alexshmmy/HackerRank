#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c;

    cin >> a;
    cin >> b;

    cout << a.size() << " " << b.size() << endl;

    c = a+b;
    cout << c << endl;

    string z;

    z = b[0];
    b[0] = a[0];
    a[0] = z[0];

    cout << a << " " << b << endl;

    return 0;
}
