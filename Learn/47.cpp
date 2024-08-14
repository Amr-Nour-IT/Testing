#include <iostream>
using namespace std;

/*
  Loop
  - Loop With For
  - Loop On Array

  Syntax
  for(init, Condition, Update)
  {
    // Block Of Code
  }
*/

int nums[] = {100, 200, 300, 400, 500, 600};
int NumsSize = sizeof(nums) / sizeof(nums[0]); // 6

int main() {

    
    cout << "The Number of List Elements is : " << NumsSize << endl;
    int i = (NumsSize - 1)
    for(;;) {
        cout << "The Element Number " << (i + 1) << " is :" << nums[i] << endl;
        i -= 1


        if ( i > 1) {
            break;
        }
    }

    return 0;
}