#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <list>
using namespace std;

bool comp(pair<int, int> a, pair <int, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
   
}

int main() {
    int N;
    int x,y;
    vector<pair<int,int>> v;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(),v.end(),comp);
    
    
    for(int i = 0; i<v.size(); i++){
        cout << v[i].first <<" " << v[i].second <<'\n';
    }
    return 0;
}
