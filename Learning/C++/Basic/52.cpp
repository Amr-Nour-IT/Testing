#include <iostream>
using namespace std;


// The Difference Between While and Do While
int main() {
    int i = 0;

    cout << "From While: \n";
    while(i < 11) { // Chick if (i < 11), while the Condition is True Do: {}
        cout << i << endl;
        i++;
    }

    cout << "----------------\n";
    cout << "From Do While: \n";
    i = 0;
    do{ // --> Do This First:
        cout << i << endl;
        i++;
    } while(i < 11); // Then Check

    return 0;
}