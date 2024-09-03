#include <iostream>
using namespace std;

char character;
int character2;
char one_or_tow;

int main() {

    cout << "=========================================" << endl;
    cout << "||            ASCII Converter          ||" << endl;
    cout << "=========================================" << endl;

    cout << "What do you want to do ?\n";
    cout << " 1. Convert Character To Number\n";
    cout << " 2. Convert Number To Character\n";
    cout << "   >> "; cin >> one_or_tow;

    if (one_or_tow == '1') {
        cout << "Enter The Character\n >>  "; cin >> character;
        cout << "The ASCII Character Of " << character << " is " << int(character) << endl;
    }

    else if (one_or_tow == '2') {
    cout << "Enter The Number\n >>  "; cin >> character2;
    cout << "The ASCII Character Of " << character2 << " is " << char(character2) << endl;
    }


    return 0;
}