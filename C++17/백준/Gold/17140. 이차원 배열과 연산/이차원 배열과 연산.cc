#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int r, c, k;
int A[101][101];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> r >> c >> k;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> A[i][j];
        }
    }

    int rowSize = 3;
    int colSize = 3;

    r--; // 0-based
    c--;

    for (int t = 0; t <= 100; ++t) {
        if (r < rowSize && c < colSize && A[r][c] == k) {
            cout << t << '\n';
            return 0;
        }

        if (t == 100) break;

        if (rowSize >= colSize) {
            // R 연산
            int newColSize = 0;
            for (int i = 0; i < rowSize; ++i) {
                int cnt[101] = {0};
                for (int j = 0; j < colSize; ++j) {
                    int x = A[i][j];
                    if (x == 0) continue;
                    cnt[x]++;
                }

                vector<pair<int,int>> v;
                for (int num = 1; num <= 100; ++num) {
                    if (cnt[num] > 0) {
                        v.push_back({cnt[num], num}); // (빈도, 숫자)
                    }
                }
                sort(v.begin(), v.end());

                int idx = 0;
                for (auto &p : v) {
                    if (idx >= 100) break;
                    A[i][idx++] = p.second;   // 숫자
                    if (idx >= 100) break;
                    A[i][idx++] = p.first;    // 빈도
                }
                newColSize = max(newColSize, idx);
                for (int j = idx; j < 100; ++j) {
                    A[i][j] = 0;
                }
            }
            colSize = min(newColSize, 100);
        } else {
            // C 연산
            int newRowSize = 0;
            for (int j = 0; j < colSize; ++j) {
                int cnt[101] = {0};
                for (int i = 0; i < rowSize; ++i) {
                    int x = A[i][j];
                    if (x == 0) continue;
                    cnt[x]++;
                }

                vector<pair<int,int>> v;
                for (int num = 1; num <= 100; ++num) {
                    if (cnt[num] > 0) {
                        v.push_back({cnt[num], num}); // (빈도, 숫자)
                    }
                }
                sort(v.begin(), v.end());

                int idx = 0;
                for (auto &p : v) {
                    if (idx >= 100) break;
                    A[idx++][j] = p.second;   // 숫자
                    if (idx >= 100) break;
                    A[idx++][j] = p.first;    // 빈도
                }
                newRowSize = max(newRowSize, idx);
                for (int i = idx; i < 100; ++i) {
                    A[i][j] = 0;
                }
            }
            rowSize = min(newRowSize, 100);
        }
    }

    cout << -1 << '\n';
    return 0;
}
