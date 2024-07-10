#include <iostream>
using namespace std;
int main()
{   int h,m,a;
    cin >> h >> m;
    cin >> a;
    if(m+a<60){
        cout << h << " "<< m+a <<endl;
    }
    else{
        if(h+((m+a)/60)>=24){
            cout << (h+((m+a)/60)) -24 << " " << (m+a)%60 << endl; 
        }
        else{
            cout << h+((m+a)/60) << " " << (m+a)%60 << endl;
        }
        
    }   
}
