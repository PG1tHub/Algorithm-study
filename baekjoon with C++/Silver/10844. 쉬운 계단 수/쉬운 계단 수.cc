#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define DIV 1000000000
int main() {
    int N;
    cin >> N;
    int dp[101][10];
    dp[1][0] = 0;
    for(int i = 1; i<=9; i++){
        dp[1][i] = 1;
    }
    for(int i = 2; i <= N; i++){
        for(int j = 0; j<=9; j++){
            if (j == 0) {
                dp[i][j] = dp[i-1][j+1] % DIV;
            }
               else if( j == 9){
                dp[i][j] = dp[i-1][j-1] % DIV;
            }
            else{
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % DIV ;
            }
        }
    }
    int result = 0;
    for(int i = 0; i<10; i++){
        result = (result +  dp[N][i]) % DIV;
    }
    
    cout << result  << '\n';
    return 0;
}

