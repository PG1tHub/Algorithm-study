#include <iostream>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a[9];
    for(int i=0;i<9;i++){
        cin >> a[i];
    }
    int max = a[0];
    int count = 0;
    for(int i =0;i<9;i++){
        if(a[i]>max){
            max = a[i];
            count = i;
        }
    }
    cout << max <<endl;
    cout << count+1 << endl;
}

