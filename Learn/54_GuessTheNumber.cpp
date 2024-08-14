// Guess The Number - Simple Game
#include <iostream>
using namespace std;

int num, Rnum=4, GN=1, YOR, nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void game() {
    cout << "You Have Just '3' Rounds\n   Enter a Number From '0' To--> '10'\n    >> "; cin >> num;
    if(num == Rnum) {
        cout << "Rghit, The Number is: " << Rnum << endl;
    }
    else if((num == (Rnum-1)) || (num == (Rnum+1))) {
        cout << "You was so close :(" << " Do You Want to Play again?\n  [1]- Yes\n  [2]- No\n\n    >> "; cin >> YOR;
        if(YOR == 1 && GN <= 2){
            GN++;
            cout << "This is The Round Number => " << GN << endl;
            game();
        }
    }
    else {
        cout << "Wrong Number :/\n Do You Want to Play again?\n  [1]- Yes\n  [2]- No\n\n    >> "; cin >> YOR;
            if(YOR == 1 && GN <= 3){
                GN++;
                cout << "This is The Round Number => " << GN << endl;
                game();
            }
            else if(YOR == 1 && GN > 3) {
                cout << "You Out of Rounds";
            }
            else if(YOR == 2)
                cout << "Ok, Bye!";
            else
                cout << "Invalid Number!!";
    }
}

int main() {

    cout << "============================\n|===  Guess The Number  ===|\n============================\n\n";
    game();

    return 0;
}