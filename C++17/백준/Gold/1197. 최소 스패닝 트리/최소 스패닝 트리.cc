#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;


int V,E;
vector<pair<int,pair<int,int>>> v;
int parent[10001];
int answer = 0;

int findParent(int x){
    if(parent[x] == x){
        return x; // 자기자신이 루트
    }
    return parent[x] = findParent(parent[x]); // 재귀로 루트 찾기
}

void unionParent(int a, int b){
    a = findParent(a);
    b = findParent(b);
    parent[b] = a;
}

int main(){
    cin >> V >> E;
    for(int i = 0; i < E; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v.push_back({c,{a,b}});
    }
    
    sort(v.begin(),v.end());
    
    for(int i = 1; i<= V; i++){
        parent[i] = i;
    }
    
    int count = 0;
    
    for(int i = 0; i < v.size(); i++){
        int cost = v[i].first;
        int a = v[i].second.first;
        int b = v[i].second.second;
        
        if (findParent(a) == findParent(b)){
            continue;
        }
        
        unionParent(a, b);
        answer += cost;
        count ++;
        
        if(count == V - 1){
            break;
        }
    }
    
    cout << answer << endl;
    
    return 0;
}
