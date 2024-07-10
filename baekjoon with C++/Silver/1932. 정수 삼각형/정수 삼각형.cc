#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    int tri[N][N];
    int dp[N][N];
    vector <int> v;
    for(int i = 0; i<N; i++){
       for (int j=0; j<=i; j++){
           cin >> tri[i][j];
        }
    }
    dp[0][0] = tri[0][0];
    for(int i = 1; i<N; i++){
        for (int j=0; j<=i; j++){
            if(j==0){
                dp[i][j] = tri[i][j] + dp[i-1][j];
            }
            else if(j==i){
                dp[i][j] = tri[i][j] + dp[i-1][j-1];
            }
            else{
                dp[i][j] = tri[i][j] + max(dp[i-1][j-1],dp[i-1][j]);
            }
        }
    }
    for(int j = 0; j< N; j++  ){
        v.push_back(dp[N-1][j]);
    }
    int ans = *max_element(v.begin(), v.end());
    cout << ans  << '\n';
    return 0;
}

