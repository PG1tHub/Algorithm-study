#include <algorithm>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,k;
    cin >> N;
    cin >> k;
    queue<int> q;
    vector <int> v;
    for(int i=1; i<=N; i++){
        q.push(i);
    }
    while(!q.empty()){
        for(int i=0; i<k-1; i++){
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    
    
    cout << "<";
    for(int i =0; i<v.size()-1; i++){
        cout << v[i] << ", ";
    }
    
    cout << v[v.size()-1] << ">" << '\n';
    return 0;
}



