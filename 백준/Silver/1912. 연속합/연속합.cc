#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N,num;
    vector<int>v;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        v.push_back(num);
    }
    vector<int>dp(N);
    dp[0] = v[0];
    int result = dp[0];
    for(int i = 1; i<N; i++){
        dp[i] = max(dp[i-1] + v[i], v[i]);
        result = max(result,dp[i]);
    }
    cout << result << endl;
    return 0;
}
