#include <iostream>
using namespace std;


/*  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/


int kilobytes;
char yes_or_no_one;



//Calculating the Kilobytes types
int calc() {
    cout << ">> ";cin >> kilobytes;
    int Bytes= kilobytes * 1000;
    int Bits= Bytes * 8;
    
    cout << "You have Enterd " << kilobytes << " (y/n) >> ";
    cin >> yes_or_no_one;
    if (yes_or_no_one == 'y' || yes_or_no_one == 'Y' || yes_or_no_one == 'yes' || yes_or_no_one == 'Yes' || yes_or_no_one == 'YES') {
        cout << "===============================================\n";
        cout << "The Number of Bytes = " << Bytes << "\n";
        cout << "The Number of Bits = " << Bits << "\n";
        cout << "===============================================\n";
    }

    else if (yes_or_no_one == 'n' || yes_or_no_one == 'N' || yes_or_no_one == 'no' || yes_or_no_one == 'No' || yes_or_no_one == 'NO') {
        cout <<"Ok, Bye!\n <3\n";
    }
    return 0;
}


int main() {
    cout << "=================================================\n";
    cout << "=========Calculating Types of Kilobytes==========\n";
    cout << "=================================================\n";

    cout <<"Enter The Number of Kilobytes\n";
    calc();
    return 0;
}
