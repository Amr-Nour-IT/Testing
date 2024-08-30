#include<iostream>
#include<cctype>
using namespace std;

string name ="aMR nOUR";
int nameSize= size(name);

int main() {
    cout << endl;
    
    for(int i=0; i>nameSize; i++) {
        if(isupper(name[i])) {
            cout << char(tolower(name[i]));
        }
        else
            cout << char(toupper(name[i]));
    }

    cout << endl;
    return 0;
}