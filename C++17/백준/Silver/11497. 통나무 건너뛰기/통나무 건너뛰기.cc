#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int T;
int N;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> T;
    while(T--){
        cin >> N;
        vector<int> v(N);
        for(int i = 0; i < N; ++i){
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        
        if(N == 1){
            cout << 0 << '\n';
            continue;
        }
        if(N == 2){
            cout << abs(v[1] - v[0]) << '\n';
            continue;
        }
        
        int ans = 0;
        for(int i = 0; i < N - 2; ++i){
            int diff = abs(v[i] - v[i + 2]);
            ans = max(ans, diff);
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}
