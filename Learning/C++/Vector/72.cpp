#include <iostream>
#include <vector>
using namespace std;

vector<int> nums = { 10, 20, 30, 40, 50 };
vector<int>::iterator first = nums.begin();
vector<int>::iterator last = nums.end() - 1;
vector<int>::iterator num = nums.begin();

int main()
{
	cout << "The Size of the List is: " << nums.size() << endl;
	cout << "First Number is:         " << *first << endl;
	cout << "Second Number is:        " << first[1] << endl;
	cout << "Third Number is:         " << first[2] << endl;
	cout << "Fourth Number is:        " << first[2] << endl;
	cout << "Last Number is:          " << *last << endl;
	advance(num, 3);  // 40
	advance(num, -3); // 10
	cout << "a Number in the list:    " << num[1] /* ((num=10) + => 1) = 20 */ << endl;
}