#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, C;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> C;
    vector<int> w(N);
    for (int i = 0; i < N; ++i) {
        cin >> w[i];
    }

    sort(w.begin(), w.end());

    // 1개로 C 만들기
    if (binary_search(w.begin(), w.end(), C)) {
        cout << 1 << '\n';
        return 0;
    }

    // 2개로 C 만들기 (투 포인터)
    int l = 0, r = N - 1;
    while (l < r) {
        long long sum = (long long)w[l] + w[r];
        if (sum == C) {
            cout << 1 << '\n';
            return 0;
        }
        if (sum < C) {
            ++l;
        } else {
            --r;
        }
    }

    // 3개로 C 만들기
    for (int i = 0; i < N; ++i) {
        int left = i + 1;
        int right = N - 1;
        while (left < right) {
            long long sum = (long long)w[i] + w[left] + w[right];
            if (sum == C) {
                cout << 1 << '\n';
                return 0;
            }
            if (sum < C) {
                ++left;
            } else {
                --right;
            }
        }
    }

    cout << 0 << '\n';
    return 0;
}
