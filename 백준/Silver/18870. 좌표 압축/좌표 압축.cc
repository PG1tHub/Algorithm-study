#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


bool comp1(pair <int,int> a, pair <int,int> b){
    return a.first < b.first;
}

bool comp2(pair <int,int> a, pair <int,int> b){
    return a.second <b.second;
}


int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> v;
    int x;
    for(int i =0; i < N; i++){
        cin >> x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end(),comp1);
    int order = 0;
    for(int i = 0; i<N; i++){
        if(v[i].first ==v[i+1].first){
            v[i].first = order;
        }
        else{
            v[i].first = order;
            order ++;
        }
    }
    sort(v.begin(),v.end(),comp2);
    
    for(int i = 0; i<v.size(); i++){
        cout << v[i].first  << '\n';
    }
  
    return 0;
}
            
