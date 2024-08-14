#include <iostream>
using namespace std;

int nums[] = {10, 20, -20, 13, 30, -30, 40};
int i, result = 0, NumSize = (size(nums));

int main() {

    for(i=0; i<NumSize; i++) {
        if((nums[i]>0) && (nums[i]%2 == 0)) {
            cout << result << " + " << nums[i] << endl;
            result += nums[i];
            cout <<"=" << result << endl;
        }
    }
    cout << "\nThe Result is: " << result << endl;
    return 0;
}