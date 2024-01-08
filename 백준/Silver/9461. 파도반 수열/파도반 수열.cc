#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int T,N;
    cin >> T;
    vector<long long> v(101,0);
    v[1] = 1;
    v[2] = 1;
    v[3] = 1;
    v[4] = 2;
    v[5] = 2;
    for(int i = 6; i<=100; i++){
        v[i] = v[i - 1] + v[i - 5];
    }
    for(int i=0; i<T; i++){
        cin >> N;
        cout << v[N] << '\n';
    }
    
    return 0;
}
