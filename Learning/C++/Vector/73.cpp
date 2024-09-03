#include <iostream>
#include <vector>
using namespace std;

vector<int> nums = {10, 20, 30, 40};
vector<int>::iterator it;

int main()
{
    cout << "================\n";
    for (it = nums.begin(); it < nums.end(); it++) {
        cout << *it << endl;
        cout << "================\n";
    }
    cout << "###############\n";
    for (int val : nums) {
        cout << val << endl;
        cout << "================\n";
    }
    cout << "###############\n";

    return 0;
}