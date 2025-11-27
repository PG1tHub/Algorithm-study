#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int N;
vector<int> price_now; // 현재 물약 가격
vector<vector<pair<int,int>>> disc; // [i] : i번 물약이 할인해주는 (물약, 할인량)
vector<bool> visited;
int ans = 1e9;

void dfs(int depth, int curCost){
    if(curCost >= ans){ // 가지치기
        return;
    }
    
    if(depth == N){ // 다 샀을 때
        ans = min(ans, curCost);
        return;
    }
    
    for(int i = 0; i < N; ++i){
        if(visited[i]) continue;
        
        visited[i] = true;
        
        // 할인 적용 기록
        vector<pair<int,int>> changed; // (idx, 원래가격)
        for(auto &p : disc[i]){
            int idx = p.first;
            int d = p.second;
            if(price_now[idx] > 1){
                int before = price_now[idx];
                price_now[idx] = max(1, price_now[idx] - d);
                changed.push_back({idx, before});
            }
        }
        
        dfs(depth + 1, curCost + price_now[i]);
        
        // 할인 롤백
        for(auto &p : changed){
            int idx = p.first;
            int before = p.second;
            price_now[idx] = before;
        }
        
        visited[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    price_now.assign(N, 0);
    for(int i = 0; i < N; ++i){
        cin >> price_now[i];
    }
    
    disc.assign(N, vector<pair<int,int>>());
    for(int i = 0; i < N; ++i){
        int p;
        cin >> p;
        for(int j = 0; j < p; ++j){
            int a, d;
            cin >> a >> d;
            a--; // 0-index
            disc[i].push_back({a, d});
        }
    }
    
    visited.assign(N, false);
    dfs(0, 0);
    
    cout << ans << '\n';
    
    return 0;
}
