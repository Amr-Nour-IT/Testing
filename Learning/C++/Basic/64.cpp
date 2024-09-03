#include<iostream>
#include<algorithm>
using namespace std;

int nums[] = {10, 20, -10, -230, 200, -100};
int numsSize = size(nums), cmn=0;

// int min1(int nums1[]){
//     int numsSize1 = size(nums1);
//     int cMN=0;
//     for(int i=0; i<numsSize1; i++) {
//         if (nums1[i] < cMN) {
//             cMN = nums1[i];
//         }
//     }
//     return cMN;
// }

int main() {
    //With Function
    cout << min(10, 20) << endl; // 10
    cout << max(10, 20) << endl; // 20

    // Manual
    for(int i=0; i<numsSize; i++) {
        if (nums[i] < cmn) {
            cmn = nums[i];
        }
    }
    cout << min({10, 20, -10, 200, -100, -230})<< endl;
    cout << cmn << endl;

    return 0;
}