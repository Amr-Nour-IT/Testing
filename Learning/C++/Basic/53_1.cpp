#include<iostream>
using namespace std;

int nums[] {10, 20, 30, 40, 50};
int numsSize = size(nums);

int main() {
    for(int i=0; i < numsSize; i++) {

        if(nums[i] == 20)
            continue;
        cout << "Number " << i+1 << " in the list is: " << nums[i] << endl;
        if(i == (numsSize - 1))
            continue;
        cout << "After\n";
    }

    return 0;
}