// Award System

#include <iostream>
using namespace std;



int num;

int main() {


	cout << "=================================\n";
	cout << "|==        Award System       ==|\n";
	cout << "=================================\n\n";

	cout << "      Enter a Random Number\n       >> "; cin >> num; cout << "\n";

	switch(num){
	case 100:
	case 144:
	case 154:
		cout << "       { You Have WON an IPHON }";
		break;
	case 244:
		cout << "       { You Have WON an IPAD }";
		break;
	default:
		cout << "        it will be better next time :( ";
	}

	cout << "";


	return 0;
}