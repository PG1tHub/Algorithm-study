#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long N;
    long long result = 1;
    cin >> N;
    if (N==0){
        result = 1;
    }
    else{
        for(long long i = N; i>0; --i){
            result = result * i;
        }
    }
    cout << result << endl;
    return 0;
}
            
