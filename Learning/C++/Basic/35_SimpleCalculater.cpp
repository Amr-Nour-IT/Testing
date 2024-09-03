// Simple Calculater

#include <iostream>
using namespace std;

double num1, num2, op;


int main() {


	cout << "===========================\n";
	cout << "|=== Simple Calculater ===|\n";
	cout << "===========================\n\n";

	cout << "      Enter Numbers one\n       >> "; cin >> num1;
	cout << "What do you want to do :\n [1] +\n [2] -\n [3] x\n [4] /\n\n   >> "; cin >> op;
	if (op != 1 && op != 2 && op != 3 && op != 4)
		cout << "Wrong Number !!!\n"; void exit(int);
	cout << "      Enter Number Two\n       >> "; cin >> num2;

	cout << "===========================\n = " << num1 << (op == 1 ? " + " : (op == 2 ? " - " : (op == 3 ? " x " : (op == 4 ? " / " : "Wrong Number")))) << num2 << "\n===========================\n";
	cout << "  = ";

	if ( op == 1)
		cout << num1 + num2;
	else if ( op == 2 )
		cout << num1 - num2;
	else if ( op == 3 )
		cout << num1 * num2;
	else if ( op == 4 )
		cout << num1 / num2;

	cout << "\n===========================\n";


	return 0;	
}