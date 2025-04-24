
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<utility>
using namespace std;

int main(){
    int n,k;
    vector<int> v;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    reverse(v.begin(),v.end());
    int count = 0;
    for(int i=0;i<n;i++){
        if(v[i]<=k){
            count += k / v[i];
            k = k % v[i];
        }
    }
    cout << count << endl;
    
    
    return 0;
}

;
