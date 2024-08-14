/*
  String
  - Concatenating Strings
  --- Normal Way
  --- strcat => Include string.h
  --- With +
  --- append
*/


#include <iostream>
#include <string.h>
using namespace std;



int main()
{
    // 1
    char fname[] = "Amr ", lname[] = {'N', 'o', 'u', 'r', '\0'};
    cout << fname << lname << endl; // Amr Nour

    // 2
    string fullname = (strcat(fname, lname));
    cout << fullname; // (Amr Nour)
    
    // 3
    string firstn = "Amr ", lastn = "Nour";
    cout << "\n" << firstn + lastn << endl; // Amr Nour

    // 4
    string name1 = "Amr ", name2 = "Nour";
    cout << name1.append(name2); // Amr Nour


    cout << "\n";

  return 0;
}