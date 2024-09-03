#include <iostream>
using namespace std;

int nums[] = {10, 20, 30, 40};
int* ptr = &nums[0];

int main()
{
    cout << "We Have a List of Number's:\n";
    cout << "First Number is: " << *ptr << endl;
    cout << "First Number Address is: " << ptr << endl;
    cout << "Second Number is: " << ptr[1] << endl;
    cout << "Second Number Address is: " << &ptr[1] << endl;
    cout << "Third Number is: " << ptr[2] << endl;
    cout << "Third Address is: " << &ptr[2] << endl;
    cout << "Last Number is: " << ptr[3] << endl;
    cout << "Last Number Address is: " << &ptr[3] << endl;
}