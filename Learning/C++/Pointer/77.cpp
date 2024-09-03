#include <iostream>
using namespace std;

int main()
{
    int nums[] = { 10, 20, 30, 40 };
    int* ptr = &nums[0];
    cout << nums << endl; // First Number Address in Memory
    cout << *nums << endl; // 10
    cout << *(nums+1) << endl; // 20

    ptr++; // 20

    cout << *ptr << endl; // 20

    ptr -= 1; // 10

    cout << *ptr << endl; // 10

    //for (int& n : nums) {
    //    cout << n << endl;
    //}
    return 0;
}