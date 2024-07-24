// Discount Application

#include <iostream>
using namespace std;


string name;
int years;
int times;


int main() {


	cout << "============================\n";
	cout << "|== Discount Application ==|\n";
	cout << "============================\n\n";

	cout << "      Enter your Name\n       >> "; cin >> name;
	cout << "\n     Hi " << name;
	cout << "\n      Enter How many Years you have been in work\n       >> "; cin >> years;
	cout << "\n      Enter How many Times you have been promotion at work\n       >> "; cin >> times;
	cout << "\n        ";

	if (times >= 1) {
			switch(years) {
			case 0:
				break;
			case 1:
				cout << "You get 10% off";
				break;
			case 3:
				cout << "You get 15% off";
				break;
			case 4:
			case 5:
				cout << "You get 20% off";
				break;
			default:
				cout << "You get 25% off";
				break;
			}
	}
	else
		cout << "You get Nothing";



	return 0;
}