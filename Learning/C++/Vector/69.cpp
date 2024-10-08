﻿#include <iostream>
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
//bool VEChecker(vector<int> nums) {  
//    if (nums.empty()) {
//        return true;                         <== It can be replaced with just if (nums.empty()) and else
//    }
//    else
//        return false;
//}

int main() {
    cout << "We want to create a list of Numbers\n";
    cout << "First, What is the size of the list, how many Numbers do you want in the list: "; cin >> numsSize;
    vector<int> nums(numsSize);
    if (nums.size() == 1) {
        cout << "Just one Number in the List?! :(, OK.!\n";
    }
    for (int i = 0; i < numsSize; i++) {
        cout << "Enter Number " << i + 1 << " in the list: "; cin >> nums.at(i);
        cout << endl;
    }
    cout << "Done..!\n";
    cout << "=============================================\n";
    print(nums);
    cout << "\n=============================================\n";
    cout << "Do you want to edit the list?\n [1]- Yes\n [2]- No\n >> "; cin >> YOrN;

    switch (YOrN)
    {
    case 1:
        int c;
        cout << "What do you want to do?\n [1]- Remove the Last Number\n [2]- Add a Number\n [3]- Clear the List and Rewrite it\n >> "; cin >> c;
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
        else if (c == 3) {
            nums.clear();
            cout << "First, What is the size of the list, how many Numbers do you want in the list: "; cin >> numsSize;
            nums.resize(numsSize);  // إعادة تهيئة القائمة بحجم جديد
            for (int i = 0; i < numsSize; i++) {
                cout << "Enter Number " << i + 1 << " in the list: "; cin >> nums.at(i);
                cout << endl;
            }
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
