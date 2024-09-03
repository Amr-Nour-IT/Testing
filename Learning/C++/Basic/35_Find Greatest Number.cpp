// Find Greatest Number

#include <iostream>
using namespace std;

double num1, num2, num3;

int main() {


    cout << "==============================\n";
    cout << "|=== Find Greatest Number ===|\n";
    cout << "==============================\n\n";

    cout << "     Enter Three Numbers\n      >> "; cin >> num1 >> num2 >> num3;

    cout << "==============================\n";

    if ( num1 > num2 && num1 > num3 )
        cout << "Number " << num1 << " is the Greatest Number";
    else if ( num2 > num3 )
        cout << "Number " << num2 << " is the Greatest Number";
    else
        cout << "Number " << num3 << " is the Greatest Number";

    return 0;
}