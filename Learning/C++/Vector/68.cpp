#include <iostream>
#include <vector>
using namespace std;

// Variables
int numsSize;

int main()
{
    cout << "We want to creat a list of Number's\n";
    cout << "Firts, What is the size of the list, how many of Number's you want in the list: "; cin >> numsSize;
    vector<int> nums(numsSize);
    if (nums.size() == 1) {
        cout << "just one Number in the List?! :(,  OK.!\n";
    }
    for (int i = 0; i < numsSize; i++) {
        cout << "Enter Number " << i + 1 << " in the list: "; cin >> nums.at(i);
        cout << endl;
    }
    cout << "Done..!\n";
    cout << "=============================================\n";
    cout << "This is the List: [ ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums.at(i);
        if (i < (nums.size() - 1)) {
            cout << ", ";
        }
    }
    cout << " ]";

    cout << endl;
    return 0;
}