#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N,num;
    cin >> N;
    vector<int> step;
    step.push_back(0);
    for(int i=0; i<N; i++){
        cin >> num;
        step.push_back(num);
    }
    vector<int>dp(300,0);
    dp[1] = step[1];
    dp[2] = step[1] + step[2];
    for(int i = 3; i<=N; ++i){
        dp[i] = step[i] + max(dp[i-2], step[i-1] + dp[i-3]);
    }
    cout << dp[N] << '\n';
    
    return 0;
}

