#include <iostream>
using namespace std;
int main()
{  int a,b,c;
    cin >> a >> b >> c;
    if(a,b,c>=2 && a,b,c<=10000){
        cout << (a+b)%c << endl;
        cout << ((a%c)+(b%c))%c << endl;
        cout << (a*b)%c << endl;
        cout << ((a%c)*(b%c))%c << endl;
    }
}