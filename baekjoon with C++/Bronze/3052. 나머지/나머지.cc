#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    int a;
    for(int i=0;i<10;i++){
        cin >> a;
        a = a % 42;
        auto it =find(v1.begin(),v1.end(),a);
        if(it==v1.end()){
            v1.push_back(a);
        }
        
    }
    cout << v1.size()<< endl;
}

