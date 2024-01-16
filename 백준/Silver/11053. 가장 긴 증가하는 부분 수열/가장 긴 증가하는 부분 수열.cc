#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N,a;
    cin >> N;

    vector<int> s;
    vector<int> dp(1000,1);
    for(int i = 0; i<N; i++){
        cin >> a;
        s.push_back(a);
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j<=i; j++){
            if(s[i] > s[j]){
                dp[i] = max(dp[i],dp[j] + 1);
            }
        }
    }
    int ans = *max_element(dp.begin(), dp.end());
    cout <<  ans << '\n';
    
    return 0;
}
