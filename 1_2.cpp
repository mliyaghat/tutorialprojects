#include <iostream>
using namespace std;

int main()
 {
     int x , R;
     cin >> x;
     if (x<70){
         R=x*350;
         cout << R <<"Rials";
     }
     else if (x<100){
         R=(70*350)+((x-70)*500);
         cout << R <<"Rials";
     }
     else if (x<450){
         R=(70*350)+(30*500)+((x-100)*770);
         cout << R <<"Rials";
     }
     else if (x>450){
         R=(70*350)+(30*500)+(350*770)+((x-450)*840);
         cout << R <<"Rials";
     }
     else{
         cout << "invalid";
     }
     return 0;
 }
