#include <iostream>
using namespace std;
int main()
{   int h,m;
    cin >> h >> m;
    if(m>=45){
        cout << h <<" " << m - 45<<endl;
    }
    else if(m<45){
        if(h==0){
            cout << h + 23 <<" "<<(m+60) -45<<endl; 
        }
        else{
        cout << h - 1 <<" "<<(m +60) -45 << endl;
        }
    }
    
}
