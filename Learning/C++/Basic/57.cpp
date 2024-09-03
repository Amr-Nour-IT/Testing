#include<iostream>
using namespace std;

int n1, n2;
char Op;

void calc(int num1 = 0, char op = 'invalid', int num2 = 0) {
    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = ";
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = ";
        cout << num1 - num2;
        break;
    case 'x':
    case 'X':
    case '*':
        cout << num1 << " x " << num2 << " = ";
        cout << num1 * num2;
        break;
    case '/' :
        cout << num1 << " / " << num2 << " = ";
        cout << num1 / num2;
        break;
    
    default:
        cout << "Invalid!";
        break;
    }
}

int main() {
    cout << "====================\n";
    cout << "|==  Calculater  ==|\n";
    cout << "====================\n\n";

    cout << "Enter the Operation:\n"; cin >> n1 >> Op >> n2;
    cout << "\n-----------------\n";
    calc(n1, Op, n2);


    cout << endl;
    return 0;
}