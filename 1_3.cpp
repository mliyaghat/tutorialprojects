#include <iostream>
using namespace std;

int main()
 {
     int x1,x2,x3,R;
     cout << "quiz";
     cin >> x1;
     cout << "miantterm";
     cin >> x2;
     cout << "term";
     cin >> x3;
     R=(0.1*x1)+(0.3*x2)+(0.6*x3);
     if (R>18){
         cout << "خیلی خوب";
     }
     else if(R>15){
         cout << "خوب";
     }
     else if(R>12){
         cout << "متوسط";
     }
     else if(R<12){
         cout << "ضعیف";
     }
     else{
         cout << "invalid";
     }
     return 0;
 }
