#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long opt ( vector<long long> l, long long num){
    long long end = *max_element(l.begin(), l.end());
    long long start = 1;
    long long result = 0;
    
    while(start <= end){
        long long mid = (start+end) / 2;
        long long count = 0;
        
        for(int i = 0; i<l.size(); i++){
            count += l[i] / mid;
        }
        if(count >= num){
            result = max(result,mid);
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int K,N;
    cin >> K >> N;
    vector <long long> v;
    long long lan;
    for(int i = 0; i<K; i++){
        cin >> lan;
        v.push_back(lan);
    }
    long long answer = opt(v,N);
    cout << answer << endl;
    
    return 0;
}
            
