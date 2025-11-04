#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
#include <stack>
using namespace std;

int N, M;
vector<vector<int>> v;
vector <bool> visited;
stack <int> s;

void dfs(int x){
    visited[x] = true;
    
    for(int i = 0; i<v[x].size(); i++){
        int next = v[x][i];
        if(!visited[next]){
            dfs(next);
        }
    }
    s.push(x);
}

int main(){
    cin >> N >> M;
    
    v.resize(N+1);
    visited.resize(N + 1, false);
    
    for(int i = 0; i< M; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    
    for(int i = 1; i <=N ; i++){
        if(!visited[i]){
            dfs(i);
        }
    }
    
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
    
    return 0;
}
