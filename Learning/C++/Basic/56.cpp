#include<iostream>
using namespace std;

// Variables
string name1;
int age1;

// Functhions
void SayHellow(string msg, string name, int age) {
    cout << msg << endl;
    cout << "Your Name is: " << name << endl;
    cout << "Your Age is: " << age << endl;
}

int main() {
    cout << "Enter Your Name and Age\n";
    cout << "What\'s your Name: "; cin >> name1;
    cout << "\nWhat\'s your Age: "; cin >> age1;
    SayHellow("\nHi\n", name1, age1);

    return 0;
}