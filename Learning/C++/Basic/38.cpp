#include <iostream>
using namespace std;


int nums[4] = { 100, 11, 22, 33 }; // the  '=' can be removed, and you don't need to chose a number like '[4]', yo can left it automatic
string names[] {};

int main() {


	nums[4] = 44; // add '44' to nums array at 'nums[4]'

	cout << nums[4] << endl;
	cout << nums[3] << endl;
	cout << nums[2] << endl;
	cout << nums[1] << endl;
	cout << nums[0] << endl;



	return 0;
}