#include <iostream>
using namespace std;

int nums1[] = {1, 2, 3};
int nums2[] = {4, 5, 6};
int nums3[] = {7, 8, 9};

int nums[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

/*
     0 1 2
-----------
0 |  1 2 3
1 |  4 5 6
2 |  7 8 9
*/


int main() {

    cout << nums[1][1] << "\n\n"; // 5


    return 0;
}