#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <list>
using namespace std;

bool comp(pair<int, int> a, pair <int, int> b){
    if(a.second == b.second){ // 첫번째 인자가 같을 때 , y 좌표가 같을때
        return a.first < b.first; // 내림차순 (true)
    }
    return a.second < b.second; // 내림차순
   
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
