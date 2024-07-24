// Even Odd Checker
int num;

#include <iostream>
using namespace std;


int main() {

    cout << "==========================\n";
    cout << "|=== Even Odd Checker ===|\n";
    cout << "==========================\n\n";
    cout << "     Enter the Numer\n      >> "; cin >> num;

    if (num % 2 == 0)
     cout << "Your Number is Even" << "\n==========================\n";
    else
    cout << "Your Number is Odd" << "\n==========================\n";

    return 0;
}