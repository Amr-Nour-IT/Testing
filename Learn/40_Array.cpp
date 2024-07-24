// Exercise on Array [List]

#include <iostream>
using namespace std;

int nums[5];
int num;


int main() {

    cout << "Enter the Number's you Want to be in the list\n";

    cout << "\n1= "; cin >> nums[0];
    cout << "\n2= "; cin >> nums[1];
    cout << "\n3= "; cin >> nums[2];
    cout << "\n4= "; cin >> nums[3];
    cout << "\n5= "; cin >> nums[4];

    cout << "\nCount of array numbers is: " << sizeof(nums) / sizeof(nums[1]); // ( 20 / 4 ) = 5 bytes, int = 4 Bytes
    cout << "\nEnter the Number of Array Element that you want to print\n >> "; cin >> num;
    cout << "\n  The Number is >> " << nums[(num - 1)];


    return 0;
}