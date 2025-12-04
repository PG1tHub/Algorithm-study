#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int N, M;
vector<vector<int>> v;
vector<bool> visited;

void dfs(int x){
    visited[x] = true;
    for(int i = 0; i < v[x].size(); i++){
        int nx = v[x][i];
        if(visited[nx] == false){
            dfs(nx);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    v.assign(N + 1, vector<int>());
    visited.assign(N + 1, false);
    
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    int cnt = 0;
    for(int i = 1; i <= N; i++){
        if(visited[i] == false){
            dfs(i);
            cnt++;
        }
    }
    
    cout << cnt << '\n';
    
    return 0;
}
