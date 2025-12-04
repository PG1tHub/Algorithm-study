#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int M, N;
vector<vector<int>> v;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> M >> N;
    v.assign(N, vector<int>(M, 0));
    
    queue<pair<int,int>> q;
    
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> v[i][j];
            if(v[i][j] == 1){ // 익은 토마토
                q.push({i, j});
            }
        }
    }
    
    // BFS
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int k = 0; k < 4; ++k){
            int nx = x + dx[k];
            int ny = y + dy[k];
            
            if(nx < 0 || ny < 0 || nx >= N || ny >= M){
                continue;
            }
            if(v[nx][ny] == 0){ // 안 익은 토마토만
                v[nx][ny] = v[x][y] + 1; // 하루 뒤에 익음
                q.push({nx, ny});
            }
        }
    }
    
    int maxDay = 0;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            if(v[i][j] == 0){ // 끝까지 안 익은 토마토
                cout << -1 << '\n';
                return 0;
            }
            maxDay = max(maxDay, v[i][j]);
        }
    }
    
    if(maxDay == 1){ // 처음부터 전부 1이었던 경우
        cout << 0 << '\n';
    }else{
        cout << maxDay - 1 << '\n';
    }
    
    return 0;
}
