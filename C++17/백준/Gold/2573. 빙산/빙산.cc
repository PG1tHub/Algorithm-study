#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;


int N, M;
vector<vector<int>>v;
vector<vector<bool>> visited;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};


void dfs (int x, int y){
    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >=N || ny >=M){
            continue;
        }
        if(v[nx][ny] != 0 && visited[nx][ny] == false){
            dfs(nx,ny);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    int cnt = 0; // 분리 개수
    v.assign(N,vector<int>(M,0));
    
    
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            int a;
            cin >> a;
            v[i][j] = a;
        }
    }
    int years = 0;
    while(true){
        int cnt = 0;
        visited.assign(N,vector<bool>(M,false));
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                if(v[i][j] != 0 && visited[i][j] == false){
                    cnt ++; // 분리 개수 추가
                    dfs(i,j);
                }
            }
        }
        
        if(cnt >= 2){ // 분리개수 2개 이상
            cout << years <<'\n';
            break;
        }
        if (cnt == 0){
            cout << 0 << '\n';
            break;
        }
        // 1년 녹이기
        vector<vector<int>> v1(N, vector<int>(M, 0));
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                if(v[i][j] == 0){
                    continue;
                }
                int count_0 = 0;
                for(int k = 0; k < 4; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    
                    if(ni < 0 || nj < 0 || ni >=N || nj >=M){
                        continue;
                    }
                    
                    if(v[ni][nj] == 0){
                        count_0 ++;
                    }
                }
                v1[i][j] = count_0;
            }
        }
        for(int i = 0; i < N; ++i){
                   for(int j = 0; j < M; ++j){
                       if (v[i][j] > 0) {
                           v[i][j] = max(0, v[i][j] - v1[i][j]);
                       }
                   }
               }
        ++years;
        
    }
}
