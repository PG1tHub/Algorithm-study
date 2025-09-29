#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    sort(v.begin(),v.end(), greater<int>());
    
    int t = N / 3;
    int count = 0;
    
    for(int i = 0; i< t * 3; i++){
        if(i % 3 !=2){
            count += v[i];
        }
    }
    
    if(N % 3 == 1){
        count += v[N-1];
    }
    
    if(N % 3 == 2){
        count += v[N-1] + v[N-2] ;
    }
    
    cout << count << endl;
    
}
