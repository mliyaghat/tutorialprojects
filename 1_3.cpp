#include <iostream>
using namespace std;

int main()
 {
     int x1,x2,x3,R;
     cin >> x1;
     cin >> x2;
     cin >> x3;
     R=(10/100*x1)+(30/100*x2)+(60/100*x3);
     switch (R){
         case 20:
         case 19:
         cout << "خیلی خوب";
         break;
         case 18:
         case 17:
         case 16:
         cout << "خوب";
         break;
         case 15:
         case 14:
         case 13:
         cout << "متوسط";
         break;
         default:
         cout << "ضعیف";
         break;
     }
     return 0;
 }
