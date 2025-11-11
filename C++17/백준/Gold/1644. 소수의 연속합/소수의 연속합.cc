#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
#include <stack>
using namespace std;

int N;

int main(){
    cin >> N;
    
    vector <bool> is_prime(N+1, true);
    vector <int> prime;
    is_prime[0] = false;
    is_prime[1] = false;
    
    for(int i = 2; i * i <= N; i++){
        if(is_prime[i]){ // i가 소수면
            for(int j = i * i; j <= N; j += i){ // i^2부터 i의 배수들 제거
                is_prime[j] = false;
            }
        }
    }
    // 소수 벡터에 넣기
    for(int i = 2; i <= N; i++){
        if(is_prime[i]){
            prime.push_back(i);
        }
    }
    
    int start = 0;
    int end = 0;
    int sum = 0;
    int count = 0;
    
    while(end <= prime.size()){
        if(sum < N){
            if(end == prime.size()){
                break;
            }
            sum += prime[end];
            end ++;
        }
        else if (sum > N){
            sum -= prime[start];
            start ++;
        }
        else{
            count ++;
            sum -= prime[start];
            start ++;
        }
    }
    
    cout << count << endl;
}
