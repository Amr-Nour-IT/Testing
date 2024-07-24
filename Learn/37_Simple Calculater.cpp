// Simple Calculater (with switch case)

#include <iostream>
using namespace std;


int op;
double num1, num2;


int main() {

	cout << "=========================\n";
	cout << "|== Simple Calculater ==|\n";
	cout << "=========================\n\n";

	cout << "      Enter the First Number\n       >> "; cin >> num1;
	cout << "\n      Chose What do you want to do ?\n       [1] +\n       [2] -\n       [3] x\n       [4] /\n\n         >> "; cin >> op;
	cout << "\n      Enter the Second Number\n       >> "; cin >> num2;
	

	if (op >= 1 && op <= 4) {
	cout << "\n=========================\n";
	cout << "          " << num1 << (op == 1 ? " + " : (op == 2 ? " - " : (op == 3 ? " x " : " / "))) << num2 << endl;
	cout << "=========================\n\n";
		switch(op) {
		case 1:
			cout << " = " << num1 + num2;
			break;
		case 2:
			cout << " = " << num1 - num2;
			break;
		case 3:
			cout << " = " << num1 * num2;
			break;
		case 4:
			cout << " = " << num1 / num2;
			break;
        default:
            cout << "Invalid Operation";

		}

        cout << "\n\n=========================\n";

	}



	return 0;
}