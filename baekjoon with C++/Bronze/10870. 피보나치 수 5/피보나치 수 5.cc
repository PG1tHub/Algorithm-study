#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int f1=0;
    int f2=1;
    int f = 0;
    if (N==0){
        cout << f << endl;
    }
    else if(N==1){
        cout << 1 << endl;
    }
    else{
        for( int i = 1; i<N; i++){
            f = f1+f2;
            f1 = f2;
            f2 = f;
        }
        
        cout << f << endl;
    }
    return 0;
}
            
