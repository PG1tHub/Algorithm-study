#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int dp[N+1][M+1];
    int v[N+1][M+1];
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            cin >> v[i][j];
    
    for (int i = 0; i <= N; i++)
           for (int j = 0; j <= M; j++)
               dp[i][j] = 0;
    
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= M; j++){
            dp[i][j] = v[i][j] + max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
        }
    }
    
    cout << dp[N][M] << endl;
    return 0;
}

