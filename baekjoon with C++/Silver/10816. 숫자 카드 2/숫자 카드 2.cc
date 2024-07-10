#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    int a;
    int t;
    vector <long long int> v;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin >> M;
    for(int i =0; i<M; i++){
        cin >> t;
        int target = t;
        bool found = binary_search(v.begin(), v.end(), target);
        if(found == 1){
            auto range = equal_range(v.begin(),v.end(),target);
            auto equal = range.second - range.first;
            cout << equal << " ";
        }
        else{
            cout << found << " ";
        }
    }
    
    return 0;
}
            
