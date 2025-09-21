#include <algorithm>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;

vector<vector<int>> graph;
vector <bool> visited;
queue <int> q;
vector<int> v;
void dfs (int x){
    visited[x] = true;
    cout << x << " ";
    for(int i = 0; i<graph[x].size(); i++){
        int next = graph[x][i];
        if(visited[next] == false){
            dfs(next);
        }
    }
}

void bfs(int x) {
    q.push(x);
    v.push_back(x);
    while (!q.empty()) {
        int y = q.front();
        cout << y << " ";
        for (int i = 0; i < graph[y].size(); i++) {
            int next = graph[y][i];
            if (find(v.begin(),v.end(),next) == v.end()) {
                    q.push(next);
                v.push_back(next);                }
            }
        q.pop();
        }
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,M,V;
    cin >> N >> M >> V;
    
    graph.resize(N+1);
    visited.resize(N+1);
    
    int p1,p2;
    for(int i = 0; i<M; i++){
        cin >> p1 >> p2;
        graph[p1].push_back(p2);
        graph[p2].push_back(p1);
    }
    
    for(int i = 1; i<=N; i++){
           sort(graph[i].begin(), graph[i].end());
       }
    
    dfs(V);
    cout << '\n' ;
    bfs(V);
    
    
    return 0;
}



