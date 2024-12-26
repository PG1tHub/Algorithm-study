#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip> // 소수점 출력용
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int X;
    cin >> X;

    long long total = 0;
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (gcd(X, v[i]) == 1) { // X와 서로소 관계인 경우
            total += v[i];
            count++;
        }
    }

    // 실수 나눗셈을 통한 평균 계산
    double result = static_cast<double>(total) / count;

    // 출력: 충분한 정밀도로 소수점 표시
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}
