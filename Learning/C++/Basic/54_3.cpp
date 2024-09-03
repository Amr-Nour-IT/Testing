#include<iostream>
using namespace std;

int nums[5];

int main() {

    cout << "Enter 5 Number's\n";
    for(int i=4; i >= 0; i--) {
        cout << "Number " << (i+1) << " : "; cin >> nums[i];
        if(i >= 1)
            continue;
        int n=0;
        i = 0;
        while(n<5){
            cout << nums[i] << endl;
            i++;
            n++;
            if()
        }
    }

    return 0;
}