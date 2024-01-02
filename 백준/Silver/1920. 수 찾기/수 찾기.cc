#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    scanf("%d", &N);
    
    vector<long long int> v(N);
    for (int i = 0; i < N; ++i) {
        scanf("%lld", &v[i]);
    }
    
    sort(v.begin(), v.end());
    
    scanf("%d", &M);
    while (M--) {
        int t;
        scanf("%d", &t);
        
        auto lower = lower_bound(v.begin(), v.end(), t);
        auto upper = upper_bound(v.begin(), v.end(), t);
        
        if (lower != v.end() && *lower == t) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    
    return 0;
}
