#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int N;
vector<vector<int>> v;
vector<vector<bool>> visited;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, int h){
    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >= N || ny >= N){
            continue;
        }
        if(v[nx][ny] > h && visited[nx][ny] == false){
            dfs(nx, ny, h);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    v.assign(N, vector<int>(N, 0));
    
    int maxH = 0;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> v[i][j];
            maxH = max(maxH, v[i][j]);
        }
    }
    
    int ans = 1; // 비 안오는 경우 최소 1 이상 나올 수 있어서 1로 시작해도 됨
    
    for(int h = 0; h <= maxH; ++h){
        visited.assign(N, vector<bool>(N, false));
        int cnt = 0;
        
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(v[i][j] > h && visited[i][j] == false){
                    dfs(i, j, h);
                    cnt++;
                }
            }
        }
        
        ans = max(ans, cnt);
    }
    
    cout << ans << '\n';
    
    return 0;
}
