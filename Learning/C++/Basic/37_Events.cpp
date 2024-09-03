/*
  2005 => "My Birth Day"
  2024 => "My First Work"
  1995 => "Windows 95"
  2000 => "Windows Millennium"
  2002 => "Created My vBulletin Forum"
  Any Other Year => "No Events in This Year"
*/

#include <iostream>
using namespace std;


int year;

int main() {


  cout << "================\n";
  cout << "|==  Events  ==|";
  cout << "================\n\n";

  cout << "      Enter a Year\n       >> "; cin >> year;

  switch(year) {
  case 2005:
    cout << "My Birth Day";
    break;
  case 2024:
    cout << "My First Work (En Sha2 Allah)";
    break;
  case 1995:
    cout << "Windows 95";
    break;
  case 2000:
    cout << "My Sisters Birth Day, Windows Millennium";
    break;
  default:
    cout << "No Events in This Year";
  }


  return 0;
}