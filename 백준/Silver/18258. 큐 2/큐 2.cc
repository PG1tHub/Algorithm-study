#include <algorithm>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    queue<int> q;
    for(int i=0; i<T; i++){
        string s;
        int x;
        cin >> s;
        if(s == "push"){
            cin >> x;
            q.push(x);
        }
        if( s== "pop"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        if( s== "size"){
            cout << q.size() << '\n';
        }
        if( s== "empty"){
            if(q.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        if( s== "front"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
            }
        }
        if( s== "back"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.back() <<'\n';
            }
        }
    }
    return 0;
}



