#include<iostream>
using namespace std;

int num = 0;
int nums[6] = {-10, 20, 30, -40, 50, 60};
int numSize = size(nums);

int main() {
    for(int i=0; i<6; i++) {
        if((nums[i] <= -1)|| ((nums[i]%2) != 0))
            continue;
    cout << nums[i] << " + " << num << endl;
    num += nums[i]; // 20 + 30 + 50 + 60 = 160
    if(nums[i] == nums[(numSize - 1)])
        cout << "So: ";
    }
    cout << "Result is: " << num;

    cout << endl;
    return 0;
}