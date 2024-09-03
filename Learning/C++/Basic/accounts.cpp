#include<iostream>
#include<algorithm>
using namespace std;

// Vareables
string username;
int userage, chosse1;
string UserNames[] = {"Amr"};
int NamesSize = size(UserNames);
int UsersAge[] = {19};
int AgesSize = size(UsersAge);

// Functions
char login(string name, int age) {
	int s = NamesSize;
	cout << "Loading...!\n";
	cout << "Chicking the username..\n";
	while (s >= 0)
	for(int i=0; i<NamesSize; i++) {
		if(UserNames[i] == name) {
			cout << "Found.\n";
			return 'f';
			break;
			}
		else {
			s--;
			}
		}
	return 'n';
	}


int main() {
	cout << "Wellcome\n";
	
	cout << "What do you want to do?\n 1- Login\n 2- Register a New Account";
	cin >> chosse1;
	
	cout << "Enter your name: "; cin >> username;
	cout << "\nEnter your Age: "; cin >> userage;

	switch(chosse1) {
		case 1:
			login (username, userage);
			break;
		case 2:
			break;
		default:
			cout << "Invaled!";
	}


	return 0;
}