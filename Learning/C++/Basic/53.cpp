#include <iostream>
using namespace std;

int nums[] = {10, 20, 30, 40, 50};

int main() {

    for(int i=0; i < 4; i++) {

        if(nums[i] == 20) {
            continue; //اعمل تخطى للعمليه الحالية و كمل الدائرة (for == true) لو كانت ال // Skip The Next and Continue the Loop
        }

        cout << "Number " << (i + 1) << " in the List is: " << nums[i] << endl;
    }


    return 0;
}