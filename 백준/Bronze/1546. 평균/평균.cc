#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<double> v;
    double a,b;
    double max=0;
    double total=0;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> b;
        if(b>max){
            max = b;
        }
        v.push_back(b);
    }
  
    for(int i=0;i<v.size();i++){
       total += (v[i] / max) * 100;
    }
    
    cout << total/v.size() << endl;
}

