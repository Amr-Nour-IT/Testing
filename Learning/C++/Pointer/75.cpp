#include <iostream>
using namespace std;

int num = 100;
int* ptr = &num;

int main()
{
	cout << "Value is: " << num << endl;
	cout << "Value is: " << *ptr << endl;
	cout << "Address is: " << &num << endl;
	cout << "Address is: " << ptr << endl; 

	cout << "========================\n";

	*ptr = 200;
	cout << "Value is: " << num << endl;
	cout << "Value is: " << *ptr << endl;
	cout << "Address is: " << &num << endl;
	cout << "Address is: " << ptr << endl;

	return 0;
}