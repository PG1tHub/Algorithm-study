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
int indegree[32001];
priority_queue<int, vector<int>, greater<int>> pq;
vector <int> answer;

int main(){
    cin >> N >> M;
    
    v.resize(N + 1);
    
    for(int i = 0; i< M; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        indegree[b]++;
    }
    
    for(int i = 1; i <= N; i++){
            if(indegree[i] == 0){
                pq.push(i);
            }
        }
    
    while(!pq.empty()){
        int cur = pq.top();
        pq.pop();
        
        answer.push_back(cur);
        
        for(int i = 0; i < v[cur].size(); i++){
            int next = v[cur][i];
            indegree[next]--;
            
            if(indegree[next] == 0){
                pq.push(next);
            }
        }
    }

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << ' ';
    }
    
    return 0;
}
