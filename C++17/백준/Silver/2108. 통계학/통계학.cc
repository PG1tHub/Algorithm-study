#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
#include <cmath>
using namespace std;

int N;
vector<int> v;
int freq[8001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    v.assign(N, 0);
    
    long long sum = 0;
    int minVal = 4001;
    int maxVal = -4001;
    
    for(int i = 0; i < N; ++i){
        int x;
        cin >> x;
        v[i] = x;
        sum += x;
        freq[x + 4000]++;
        minVal = min(minVal, x);
        maxVal = max(maxVal, x);
    }
    
    sort(v.begin(), v.end());
    
    // 1. 산술평균 (반올림)
    int mean = (int)round((double)sum / N);
    
    // 2. 중앙값
    int median = v[N / 2];
    
    // 3. 최빈값 (여러 개면 두 번째로 작은 값)
    int maxFreq = 0;
    for(int i = 0; i < 8001; ++i){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
        }
    }
    
    int mode = 0;
    bool first = true;
    for(int i = 0; i < 8001; ++i){
        if(freq[i] == maxFreq){
            mode = i - 4000;
            if(first){
                first = false;
            }else{
                break; // 두 번째로 작은 값에서 멈춤
            }
        }
    }
    
    // 4. 범위
    int rangeVal = maxVal - minVal;
    
    cout << mean << '\n';
    cout << median << '\n';
    cout << mode << '\n';
    cout << rangeVal << '\n';
    
    return 0;
}
