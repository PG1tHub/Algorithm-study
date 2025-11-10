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
    vector <int> lenght;
    
    while (end <= N){
        if(sum < M){
            if(end < N){
                sum += v[end];
                end ++;
            }
            else{
                break;
            }
        }
        else if(sum >= M){
            lenght.push_back(end - start);
            sum -= v[start];
            start ++;
        }
    }
 
    int answer;
    if(lenght.empty()){
        answer = 0;
    } else {
        answer = *min_element(lenght.begin(), lenght.end());
    }
    
    cout << answer << endl;
    
    return 0;
}
