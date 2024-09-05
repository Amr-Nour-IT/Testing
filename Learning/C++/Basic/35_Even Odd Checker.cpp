// Even Odd Checker
#include <iostream>
using namespace std;

int num;

string EvenOrOdd(int num) {
	 if (num % 2 == 0)
	    	return "Even";
	 else
     	return "Odd";
}

int main() {

    cout << "==========================\n";
    cout << "|=== Even Odd Checker ===|\n";
    cout << "==========================\n\n";
    cout << "     Enter the Numer\n      >> "; cin >> num;
cout << "The Number is ";

cout << EvenOrOdd(num);
    
    cout << "\n==========================\n";

    return 0;
}