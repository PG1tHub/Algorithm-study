#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int T;
int M, N, K;
vector<vector<int>> v;
vector<vector<bool>> visited;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >= N || ny >= M){
            continue;
        }
        if(v[nx][ny] == 1 && visited[nx][ny] == false){
            dfs(nx, ny);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> T;
    while(T--){
        cin >> M >> N >> K;
        
        v.assign(N, vector<int>(M, 0));
        visited.assign(N, vector<bool>(M, false));
        
        for(int i = 0; i < K; ++i){
            int x, y;
            cin >> x >> y;
            v[y][x] = 1;
        }
        
        int cnt = 0;
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                if(v[i][j] == 1 && visited[i][j] == false){
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}
