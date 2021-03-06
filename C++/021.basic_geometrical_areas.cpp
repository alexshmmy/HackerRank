#include <iostream>
#include <limits>
#define PI 3.14
using namespace std;

// functions declarations
void initMenu(void);
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
bool isValid(void);

const string ERROR_MSG = "Wrong! Please type again!";

int main(void) {
    int area_choice;
    char contin;

    do {
        initMenu();
        do {cin >> area_choice;} while (!isValid());
        menuDecision(area_choice);

        do {
            cout << "Do you want to continue the program? (Y/N)" << endl;
            cin >> contin;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while(contin != 'y' && contin != 'Y' && contin != 'N' && contin != 'n');

    } while (contin == 'y' || contin == 'Y');

    return 0;
}

void initMenu(void) {
    cout << "Enter option:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
}

void menuDecision(int choice) {
    double r, a, b, h;

    switch(choice) {
        case 1:
            cout << "Enter the radius: " << endl;
            do {cin >> r;} while (!isValid());
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of a square: " << endl;
            do {cin >> a;} while (!isValid());
            areaSquare(a);
            break;
        case 3:
            cout << "Enter the width and height of a rectangle: " << endl;
            do {cin >> a >> b;} while (!isValid());
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Enter the base and height of a triangle: " << endl;
            do {cin >> a >> h;} while (!isValid());
            areaTriangle(a, h);
            break;
        default:
            cout << "You didn't choose any of the option from above" << endl;
    }
}

double areaCircle(double r) {
    double result = PI * r * r;
    cout << "The area of a circle that radius is " << r << " = " << result << endl;
    return result;
}

double areaSquare(double a) {
    double result = a * a;
    cout << "The area of a square that side is " << a << " = " << result << endl;
    return result;
}

double areaRectangle(double a, double b) {
    double result = a * b;
    cout << "The area of a rectangle that first side is " << a << " the second side is " << b << " = " << result << endl;
    return result;
}

double areaTriangle(double a, double h) {
    double result = (1/2.0) * a * h;
    cout << "The area of a rectangle that first side is " << a << " the second side is " << h << " = " << result << endl;
    return result;
}

bool isValid(void) {
    // state is wrong when it is not equal to 0
    if (cin.rdstate()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        initMenu();
        cout << ERROR_MSG << endl;
        return false;
    }

    return true;
}
