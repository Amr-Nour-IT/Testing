#include<iostream>
#include<array>
#include<vector>
using namespace std;

vector<int> nums = { 10, 20, 30, 40, 50 };

int main() {
    cout << "============\n";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums.at(i) << endl << "============\n";
    }
    return 0;
}