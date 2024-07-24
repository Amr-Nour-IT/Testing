// Rank Checker

#include <iostream>
using namespace std;

int points = 10;

int main() {


    cout << "==========================\n";
    cout << "== Rank Checker Program ==\n";
    cout << "==========================\n\n";

    cout << "   Enter Your Points Number\n    >> "; cin >> points;
    
    cout << "Your Rank is : " << ( points <= 500 && points > 0 ? "Not Bad" : ( points <= 1000 && points > 0 ? "Good" : (points >= 1001 && points > 0 ? "Super" : "Nothing") ) );



    return 0;
}