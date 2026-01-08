#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 int BIG = 9999999;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int C, N;
    cin >> C >> N;

    vector<int> cost(N), cust(N);
    for (int i = 0; i < N; i++) {
        cin >> cost[i] >> cust[i];
    }

    // dp[x] = 고객 x명을 확보하기 위한 최소 비용
    // "최소 C명 이상"이므로 여유 있게 C + 100까지 본다
    int MAX = C + 100;
    vector<int> dp(MAX + 1, BIG);

    // 초기 상태
    dp[0] = 0;

    // 무한 배낭: 같은 광고 여러 번 사용 가능
    for (int i = 0; i < N; i++) {
        for (int x = cust[i]; x <= MAX; x++) {
            dp[x] = min(dp[x], dp[x - cust[i]] + cost[i]);
        }
    }

    int ans = BIG;
    for (int x = C; x <= MAX; x++) {
        ans = min(ans, dp[x]);
    }

    cout << ans << '\n';
    return 0;
}
