#include<iostream>
using namespace std;

int add(int num) {
    if(num != 0) {
        cout << num << endl;
        return num + add(num-1);
    }
    return 0;
}

int main() {
    cout << add(5);

    return 0;
}