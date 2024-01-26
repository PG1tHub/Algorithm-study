#include <algorithm>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int order,num;
    cin >> N;
    stack <int> s;
    for(int i = 0; i<N; i++){
        cin >> order;
        if(order == 1){
            cin >> num;
            s.push(num);
        }
        if(order == 2){
            if(s.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << s.top() << '\n';
                s.pop();
            }
        }
        if(order == 3){
            cout << s.size() << '\n';
        }
        if(order == 4){
            if (s.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        if(order == 5){
            if(s.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << s.top() << '\n';
            }
        }
    }
    return 0;
}



