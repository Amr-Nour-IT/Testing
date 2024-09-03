#include<iostream>
#include<cctype>
using namespace std;

string name ="aMRnOUR";
int nameSize= size(name);

int main() {
    cout << endl;
    cout << "\n|=----------=|\n";

    for(int i=0; i<nameSize; i++) {
        if(isupper(name[i])) {
            cout << char(tolower(name[i]));
        }
        else {
            cout << char(toupper(name[i]));
        }
    }

    cout << "\n|=----------=|\n";

    name ="A m r  \n\t-  N o u\n r";
    nameSize= size(name);


    for(int i2=0; i2<nameSize; i2++) {
        if(isspace(name[i2])) {
            continue;
        }
        else
            cout << name[i2];
    }

    cout << "\n|=----------=|\n";

    cout << endl;
    return 0;
}