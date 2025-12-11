#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<long long> w(N);
    for (int i = 0; i < N; ++i) {
        cin >> w[i];
    }

    sort(w.begin(), w.end());

    long long reach = 1; 
    // 지금까지 1 ~ (reach - 1) 까지는 전부 만들 수 있다는 뜻

    for (int i = 0; i < N; ++i) {
        if (w[i] > reach) break;
        reach += w[i];
    }

    cout << reach << '\n';
    return 0;
}
