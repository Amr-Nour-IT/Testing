#include <iostream>
using namespace std;

double num;
int main() {
   

    cout << "Enter Number\n >> "; cin >> num;
    cout << "  The Number is : " << num << endl;
    cout << "The Number in float(Double) is : " << double(num) << endl;
    cout << "The in integet is : " << int(num) << endl; // Convert type from Double to Integer


    cout << "\n\n\n" << endl;
    return 0;
}
