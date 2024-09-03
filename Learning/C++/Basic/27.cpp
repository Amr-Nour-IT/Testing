#include <iostream>
using namespace std;


/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Comparison Operators
  "For Comparing Values"

  --- == Equal
  --- != Not Equal
  --- > Greater Than
  --- < Less Than
  --- >= Greater Than Or Equal
  --- <= Less Than Or Equal
*/


int age;

int main() {

    // if (10 != 12) {
    //     cout << "'10' Do not equal '12' " << endl;
    // }

    // else {
    //     cout << "10 == 12 " << endl;
    // }

    cout << "\n==============================================\n" << endl;
    cout << "Enter your age\n >> "; cin >> age;

    if (age >= 18) {
        cout << "You are an adult" << endl;
        cout << "==============================================\n" << endl;
    }

    else {
        cout << "You are not an adult" << endl;
        cout << "==============================================\n" << endl;

    }


    return 0;
}