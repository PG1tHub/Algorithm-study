#include <algorithm>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    queue<int> q;
    for(int i=1; i<=N; i++){
        q.push(i);
    }
    while( q.size() != 1){
        q.pop();
        int a;
        a = q.front();
        q.pop();
        q.push(a);
    }
    cout << q.front() << '\n';
    return 0;
}



