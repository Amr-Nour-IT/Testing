// Guess The Number Simple Game
#include<iostream>
#include<string>
using namespace std;

string name; int num=0; int gtry=0; const int tnum = 4;

void game() {
    cout << "Guess a Number from '1' to '10': "; cin >> num;
    
    switch (num)
    {
    case tnum:
        cout << "True :)\n";
        break;
    
    default:
        cout << "False\n";
        gtry++;
        if (gtry < 3)
            cout << "Try again\n";
        if((gtry >= 0) && (gtry < 3))
            game();
        else{
            cout << "You out of try :(\n";
        }
        break;
    }
}

int main() {
    game();
}