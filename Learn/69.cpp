#include <iostream>
#include <vector>
using namespace std;

// Variables
int numsSize;
int YOrN;

// Functions
void print(vector<int> nums) {
    cout << "This is the List: [ ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums.at(i);
        if (i < (nums.size() - 1)) {
            cout << ", ";
        }
    }
    cout << " ]";
}

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
    print(nums);
    cout << "\n=============================================\n";
    cout << "Do you Want to Edit The List?\n [1]- Yes\n [2]- No\n >> "; cin >> YOrN;

    switch (YOrN)
    {
    case 1:
        int c;
        cout << "What do you Want to do?\n [1]- Remove the Last Number\n [2]- Add a Number\n >> "; cin >> c;
        if (c == 1) {
            nums.pop_back();
            print(nums);
        }
        else if (c == 2) {
            int number;
            cout << "Enter Number " << (nums.size() + 1) << " in the List: "; cin >> number;
            nums.push_back(number);
            print(nums);
        }
        else
            cout << "Invalid..!\a";
        break;
     case 2:
         cout << "Ok, Bye..";
         break;

     default:
         cout << "Invalid..!\a\nTry again:\n";
         
        break;
    }

    cout << endl;
    return 0;
}