#include <iostream>
using namespace std;

int age;

int main() {
    cout << "==================================\n";
    cout << "|=Calculate Your Age Application=|\n";
    cout << "==================================\n";
    
    cout << "Enter your age >> "; cin >> age;
    cout << "\nYour age is: " << age << "\n";

    cout << "Do you want to see how old are you in days ? (y/n) >> ";

    char yes_or_no_one;
    cin >> yes_or_no_one;

    // Calculating
    int AgeInDays = age * 365;
    int AgeInWeeks = AgeInDays * 7;
    int AgeInMonths = age * 12;
    int AgeInYears = age;
    int AgeInHours = AgeInDays * 24;
    int AgeInMinutes = AgeInHours * 60;
    int AgeInSeconds = AgeInMinutes * 60;


    if (yes_or_no_one == 'y' || yes_or_no_one == 'Y' || yes_or_no_one == 'yes' || yes_or_no_one == 'Yes' || yes_or_no_one == 'YES') {
        cout << "===============================================\n";
        cout << " You are " << AgeInMonths << " months old\n";
        cout << " You are " << AgeInWeeks << " weeks old\n";
        cout << " You are " << AgeInDays << " days old\n";
        cout << " You are " << AgeInHours << " hours old\n";
        cout << " You are " << AgeInMinutes << " minutes old\n";
        cout << " You are " << AgeInSeconds << " seconds old\n";
        cout << "===============================================\n";
    }

    else if (yes_or_no_one == 'n' || yes_or_no_one == 'N' || yes_or_no_one == 'no' || yes_or_no_one == 'No' || yes_or_no_one == 'NO') {
        cout <<"Ok, Bye!\n <3\n";
    }

    return 0;
}