#include <iostream>
using namespace std;

int age =18;
int points = 10;

int main() {

    if (age >= 18)
        cout << (points >= 800 ? "age and points is ok" : "age is ok but points is not");
    else
        cout << (points >= 800 ? "Points is ok but age is not" : "No points or age");


    return 0;
}