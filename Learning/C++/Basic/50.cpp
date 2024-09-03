#include <iostream>
using namespace std;

string products[] = {"Item 1", "Item 2", "Item 3"}, sizes[] = {"Small", "Larg", "X-Larg"};
int i;

int main() {

    for(i = 0; i < 3; i++) {
        cout << "\nWe Have " << products[i] << "\nThe Available Size's for it is:\n" << endl;
        for(int i2 = 0; i2 < 3; i2++) {
            cout << sizes[i2];
            if (i2 < 2)
                cout << ", ";
        }
        cout << "\n------------------------------------------------------------\n";
    }


    return 0;
}