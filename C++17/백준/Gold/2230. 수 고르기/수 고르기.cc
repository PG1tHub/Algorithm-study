#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
#include <stack>
using namespace std;

int N, M;
vector <int> v;

int main(){
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    
    int start = 0;
    int end = 0;
    int dif = 0;
    vector <int> d;
    while(end < N){
        dif = v[end] - v[start];
        if(dif < M){
            end ++;
        }
        else{
            d.push_back(dif);
            start ++;
            if(start > end){
                end = start;
            }
        }
    }
    int answer = 0;
    if(d.empty()){
        answer = 0;
    }
    else{
        answer = *min_element(d.begin(), d.end());
    }
    
    cout << answer << endl;
    
}
