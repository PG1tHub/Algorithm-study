
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    
    // 1로 초기화
    vector<int> v(n,1);
    for (int i = 0; i < lost.size();){
        auto it = find(reserve.begin(), reserve.end(),lost[i]); // lost[i]가 reserve에 있으면 제거
        if( it != reserve.end()){
            lost.erase(lost.begin() + i); //lost에서 삭제
            reserve.erase(it);//reserve에서도 삭제
        }
        else{
            i++;
        }
    }
    // lost를 0으로 초기화
    for(int i=0; i<lost.size(); i++){
        int l = lost[i];
        v[l-1] = 0;
    }
    // 여분을 2로 초기화
    for(int i=0; i<reserve.size(); i++){
        int l = reserve[i];
        v[l-1] = 2;
    }
    
    for( int i = 0; i<n; i++){
        // v[i]가 0일때
        if(v[i] == 0){
            // 이전 값이 2라면
            if(i>0 && v[i-1] == 2){
                v[i] += 1;
                v[i-1] -= 1;
            }
            // 이후 값이 2라면
            else if( i< n - 1 && v[i+1] == 2 ){
                v[i] += 1;
                v[i+1] -= 1;
            }
        }
    }
    int answer = 0;
    for (int i =0; i<v.size(); i++){
        if(v[i] > 0){
            answer ++;
        }
    }
    return answer;
}
 