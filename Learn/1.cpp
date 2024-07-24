#include <iostream>
using namespace std;


int g=100; // Global Variable 

int second() {
    int s=200;    
    return 0;
}


int main() {

    int a, b, c;
    a=1;
    b=0;
    c=2;
    cout << a << b << c << "   ";
    cout << "Hello, World!   ";
    a=b=2;
    cout << a+b+c+g; // a=2 + b=2 + c=2 + g = 100
    return 0;
}