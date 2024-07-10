#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> w(N);
    vector<int> dp(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> w[i];
    }

    dp[0] = w[0];
    dp[1] = max(w[0] + w[1], w[1]);
    dp[2] = max({w[0] + w[2], w[1] + w[2], dp[1]});

    for (int i = 3; i < N; i++) {
        dp[i] = max({w[i] + w[i - 1] + dp[i - 3], dp[i - 1], dp[i - 2] + w[i]});
    }

    cout << dp[N - 1] << '\n';
    return 0;
}
