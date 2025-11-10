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
int main(){
    cin >> N >> M;
    vector <int> v;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    int start = 0;
    int end = 0;
    int sum = 0;
    int count = 0;
    
    while (end <= N){
        if(sum < M){
            sum += v[end];
            end ++;
                    }
        else if(sum > M){
            sum -= v[start];
            start ++;
        }
        else{
            count ++;
            sum -= v[start];
            start ++;
        }
    }
    cout << count << endl;
    
}

