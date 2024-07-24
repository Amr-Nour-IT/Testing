#include <iostream>
using namespace std;

int yes_or_no;
int birthday;
string name, ProName; 

void ClearScreen() {
    #ifdef _WIN32
        system("cls"); // مسح الشاشة في Windows
    #elif defined(__unix__) || defined(__unix) || defined(__linux__) || defined(__APPLE__) || defined(__MACH__)
        system("clear"); // مسح الشاشة في Unix/Linux/macOS
    #else
        cout << "\nError! Unable to determine the operating system.\n" << endl;
    #endif
}

void Ask() {
    cout << "==================\n";
    cout << "|===  Answer  ===|\n";
    cout << "==================\n\n";

    // تجاهل الحرف الجديد من الإدخالات السابقة
    cin.ignore();
    
    cout << "What is my name\n >> "; cin >> name;
    cout << "\nWhat is the day I was born on\n >> "; cin >> birthday;
    cout << "\nWhat is my brother's name\n >> "; cin >> ProName;

    cout << ((name == "Amr" || name == "amr") ? "\nMy name is correct.\n" : "\nMy name is incorrect.\n");
    cout << ((ProName == "Taha" || ProName == "taha") ? "\nMy brother's name is correct.\n" : "\nMy brother's name is incorrect.\n");
    cout << (birthday == 2005 ? "\nMy birthday is correct.\n" : "\nMy birthday is incorrect.\n");
    
    cout << (((name == "Amr" || name == "amr") && birthday == 2005 && (ProName == "Taha" || ProName == "taha")) 
            ? "\nAll answers are correct. Now you know me :)\n\n" 
            : "\nNot all answers are correct. You don't know me well :(\n\n");
}

void YesOrNo() {
    cout << "Did you read all the info about me?\n [1]- Yes\n [2]- No\n >> "; cin >> yes_or_no;

    if (yes_or_no == 1) {
        ClearScreen();
        cout << "Good, now I will ask you.\n";
        Ask();
    } else if (yes_or_no == 2) {
        cout << "Ok, we will do it next time.\n";
    } else {
        cout << "Invalid number.\n";
    }
}

int main() {
    cout << "=======================\n";
    cout << "|===  Ask, Answer  ===|\n";
    cout << "=======================\n\n";

    // معلومات
    cout << "My name is Amr.\n";
    cout << "My birthday is in: (2005)\n";
    cout << "My brother's name is Taha.\n";

    YesOrNo();

    return 0;
}
