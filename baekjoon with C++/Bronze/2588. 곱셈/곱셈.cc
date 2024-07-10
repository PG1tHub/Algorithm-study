#include <iostream>
using namespace std;
int main()
{  int a,b;
   int num1,num2,num3=0;
   cin >> a;
   cin >> b;
   if(a,b>=100 && a,b<=999){
    num1 = b / 100;
    num2 = (b - (num1*100)) / 10;
    num3 = (b - (num1*100)-(num2*10));
    cout << a * num3 << endl;
    cout << a * num2 << endl;
    cout << a * num1 << endl;
    cout << (a * num3 )+(a * num2 *10)+(a * num1 * 100) << endl; 
   }
}