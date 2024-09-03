#include <iostream>


using namespace std;
using small = short int;         // Creat alias 'small' that means 'short int'
typedef long long int bigint;    // Creat alias 'bigint' that means 'long long int'



int main() {

    cout << "=========================" << endl;

    small a = 100; // =  short int a = 100;
    cout << a << endl;
    cout << sizeof(small) << endl;

    cout << "=========================" << endl;

    bigint bignum = 12345678900000;
    cout << bignum << endl;
    cout << sizeof(bignum);

    cout << "\n=========================" << endl;

    cout <<"\n\n\n";
    return 0;
}