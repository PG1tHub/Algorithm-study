#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int N,M;
vector<vector<int>> d;
vector<vector<int>> v;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void BFS(){
    queue<pair<int,int>> q;
    
    d.assign(N, vector<int>(M,-1));
    d[0][0] = 1;
    q.push({0,0});
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        if(x == N-1 && y == M-1){
            break;
        }
        
        for(int i = 0 ; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || ny < 0 || nx >= N || ny >= M){
                continue;
            }
            
            if(v[nx][ny] == 0 ){
                continue;
            }
            
            if(d[nx][ny] != -1){
                continue;
            }
            
            d[nx][ny] = d[x][y] + 1;
            q.push({nx,ny});
        }
        
       
    }
}


int main(){
    cin >> N >> M;
    v.assign(N, vector<int>(M,0));
    for(int i = 0; i<N; ++i){
        string s;
        cin >> s;
        for(int j = 0; j < M; ++j){
            v[i][j] = s[j] - '0';
        }
    }
    BFS();
    cout << d[N-1][M-1] << endl;
    
    return 0;
}

