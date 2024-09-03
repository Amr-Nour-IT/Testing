#include <iostream>
using namespace std;

int num;


int main() {

    cout << "Double The Number" << endl;
    cout << "Enter The Number\n  >> " << endl;
    cin >> num;

    int dou;

    dou = num += num; // dou = num + num;

    auto a=10;
    a += 5; // a = a(the same value) + 5

    cout << "\n\nThe Double Number is\n >> " << dou << endl;

    cout << a  << "\n\n" << endl;

    return 0;
}