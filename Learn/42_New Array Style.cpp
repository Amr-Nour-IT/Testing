#include <iostream>
#include <array>
using namespace std;


int num;
int choise;
bool a = false;

array <int, 5> nums = {};

int proses() {
  if (a == true){
  cout << "\nCount of List numbers is :  " << nums.size();
  cout << "\nThe First Number in the list is : " << nums.front();
  cout << "\nThe Last Number in the list is : " << nums.back();
  cout << "\nThe most close Number to the middle is : " << nums[(nums.size() / 2)  - 1];
  cout << "\nEnter the Number of Array Element that you want to print\n >> "; cin >> num;
  cout << "\n  The Number is >> " << nums[(num - 1)] << endl;
  }
  else if (a == false)
    cout << "The List is Empty\n\n";

  return 0, a;
}


int main()
 {
  cout << "We Have a List From 5 Valuse\n";
  cout << "Do you Want to fill the List or leave it ?\n [1]- fill it\n [2]- leave it\n   >> "; cin >> choise;
  

  switch (choise)
  {
  case 1:
    cout << "Enter the Numbers of the list (Larger than 0)";
    cout << "\n1= "; cin >> nums[0];
    cout << "\n2= "; cin >> nums[1];
    cout << "\n3= "; cin >> nums[2];
    cout << "\n4= "; cin >> nums[3];
    cout << "\n5= "; cin >> nums[4];
    if (nums[0] > 0)
      a = true;
    proses();
    break;
  case 2:
    cout << "Ok\n";
    break;
  
  default:
    cout << "Invalid Value!\n\a";
    break;
  }

    return 0, a;
  }