#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int N;
vector<vector<int>>v;
vector<vector<bool>>visited;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int dfs(int x, int y){
    int cnt = 1;
    visited[x][y] = true;
    for(int i = 0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny>= N){
            continue;
        }
        
        if(v[nx][ny] == 1 && visited[nx][ny] == false){
            cnt+=dfs(nx,ny);
        }
    }
    return cnt;
}

int main(){
    cin >> N;
    v.assign(N,vector<int>(N,0));
    visited.assign(N,vector<bool>(N,false));
    int cnt = 0;
    vector<int>ans;
    for(int i = 0; i<N; ++i){
        string s;
        cin >> s;
        for(int j = 0; j < N; ++j){
            v[i][j] = s[j] -'0';
        }
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(visited[i][j] != true && v[i][j] == 1){
                cnt++;
                int a = dfs(i,j);
                ans.push_back(a);
            }
        }
    }
    cout << cnt << '\n';
    sort(ans.begin(), ans.end());
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] <<'\n';
    }
    
}
