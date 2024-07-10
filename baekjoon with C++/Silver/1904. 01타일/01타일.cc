#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
    long long N;
    cin >> N;

    long long a = 1, b = 2, c;

    if (N == 1) {
        cout << 1 << '\n';
    } else if (N == 2) {
        cout << 2 << '\n';
    } else {
        for (long long i = 3; i <= N; ++i) {
            c = (a + b) % 15746;
            a = b;
            b = c;
        }
        cout << c << '\n';
    }

    return 0;
}
