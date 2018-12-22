#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a==0 and b==0)
    {
        cout << "invalid value";
    }
    else if(a==0)
    {
        cout << 0-(c/b);
    }
    else if(pow(2,b)-4*a*c<0)
    {
        cout << "invalid value";
    }
    else
    {
        int x1, x2;
        x1=(0-b)+sqrt(pow(2,b)-4*a*c)/2*a;
        x2=(0-b)-sqrt(pow(2,b)-4*a*c)/2*a;
        cout << x1;
        cout << x2;
    }
    return 0;
 }
