#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <list>
using namespace std;


bool comp(string a,string b){
    if(a.length() == b.length()){
        return a < b;
    }
    return a.length() < b.length();
}


int main() {
    vector <string> v;
    string str;
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> str;
        if(find(v.begin(),v.end(),str) == v.end()){
            v.push_back(str);
        }
    }
    sort(v.begin(),v.end());
    sort(v.begin(),v.end(),comp);
    
    for (int i = 0; i<v.size(); i++){
        cout << v[i] << '\n';
    }
    
    return 0;
}
            
