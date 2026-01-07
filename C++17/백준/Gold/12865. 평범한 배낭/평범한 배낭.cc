#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int main(){
    int N, K;
    vector <int> weight;
    vector <int> value;
    cin >> N >> K;
    weight.resize(N);
    value.resize(N);
    for(int i = 0; i < N; i++){
        int W, V;
        cin >> weight[i] >> value[i];
    }
    
    vector<int> dp(K+1, 0);
    
    for(int i = 0; i < N; i++){
        int w = weight[i];
        int v = value[i];
        
        for( int j = K; j >= w; j --){
            dp[j] = max(dp[j], dp[j-w] + v);
        }
    }
    
    cout << dp[K] << '\n';
    
}
