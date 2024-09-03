#include <iostream>
using namespace std;


char nameA[] = "AmrNour";

int main() {

    cout << nameA << "\n"; // AmrNour
    cout << "\nThe First Character in the list is : " << nameA[0]; // A 
    cout << "\nThe Latest Character in the list is : " << nameA[6]; // r 
    cout << "\nThe nul ASCII Value is : " << int(nameA[7]) << endl; // \0 --> nul


    return 0;
}
