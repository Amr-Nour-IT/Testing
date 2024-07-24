// // Switch Cases

// /*
//   Control Flow
//   - Switch
// */

#include <iostream>
using namespace std;

int day;


int main () {


    cout << "Wellcome in our Farm\n Enter the day you want to vist in from the days of week\n\n  >> "; cin >> day;

    if (day <= 7 && day >= 1) {
        switch(day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "yes we open at day " << day << " from '8 AM' to '10 PM'";
            break;
        default:
            cout << "Closed at Day " << day;
            break;
        }
    }
    else {
        cout << "Invalid";
    }


    return 0;
}



// int main()
// {
//   int day;
//   cout << "Choose A Day From 1 To 25\n";
//   cin >> day;

//   // if (day == 1)
//   // {
//   //   cout << "Open From 08:00 To 14:00";
//   // }
//   // else if (day == 2)
//   // {
//   //   cout << "Open From 08:00 To 14:00";
//   // }
//   // else if (day == 3)
//   // {
//   //   cout << "Open From 10:00 To 16:00";
//   // }
//   // else
//   // {
//   //   cout << "Closed";
//   // }

//   switch (day)
//   {
//   case 1:
//   case 2:
//     cout << "Open From 08:00 To 14:00";
//     break;
//   case 3:
//     cout << "Open From 10:00 To 16:00";
//     break;
//   default:
//     cout << "Closed";
//   }

//   return 0;
// }



