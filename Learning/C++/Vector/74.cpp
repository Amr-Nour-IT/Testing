#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Varianles
vector<int> nums = {10, 500, 60, -20, 20, 20, 100, 20};

int main()
{
    cout << "Number's in the List:\n";
    for (int& n : nums) {
        cout << n << endl;
    }

    sort(nums.begin(), nums.end()); // يرتب العناصر
    cout << "Number's in the List after Sorting:\n";
    for (int &n : nums) {
        cout << n << endl;
    }

    cout << "==========================\n";

    int val = 20;
    int countTimes = count(nums.begin(), nums.end(), val);
    cout << "Number " << val << " Have been Found " << countTimes << " Times in the List." << endl;

    cout << "==========================\n";
    cout << "The Number in The List after Reverse:\n";

    reverse(nums.begin(), nums.end()); // يعكس العناصر
    for (int& n : nums) {
        cout << n << endl;
    }

    return 0;
}