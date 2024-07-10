#include <iostream>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    int max = a[0];
    int min = a[0];
    for(int i =0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    cout << min <<" "<< max <<endl;
}

