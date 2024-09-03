#include <iostream>
using namespace std;

int views=0;
int likes=0;

int main(){

    cout << "============================================================\n";
// Views
    // cout << ++views << endl; // will dd 1 to 'views'
    cout << "Views\n >> " << ++views << endl; // 1
    cout << "============================================================\n";
    char yes_or_no;
    cout << " Do you like our program? (y/n)\n >> "; cin >> yes_or_no;

    if (yes_or_no == 'y' || yes_or_no == 'Y' || yes_or_no == 'yes' || yes_or_no == 'Yes' || yes_or_no == 'YES') {
        // Likes
        //cout << likes++; // will print 0 and add 1 to 'likes'
        cout << "Likes + 1 :) \n >> " << ++likes << endl; // will print 0 and add 1 to 'likes'  
        // cout << likes << endl; // 1
        cout << "============================================================\n";
    }

    else if (yes_or_no == 'n' || yes_or_no == 'N' || yes_or_no == 'no' || yes_or_no == 'No' || yes_or_no == 'NO') {
        cout << "Ok, Bye!\n <3\n";
        cout << "============================================================\n";
    }

    return 0;
}