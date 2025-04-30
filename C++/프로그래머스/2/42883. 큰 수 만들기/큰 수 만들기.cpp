#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<utility>
#include<stack>
using namespace std;

string solution(string number, int k) {
    stack<int> s;
    for(char c : number){
        int num = c - '0';
        while(!s.empty() && s.top() < num && k > 0){
            s.pop();
            k--;
        }
        s.push(num);
    }
    
    while (k > 0) {
        s.pop();
        k--;
    }
    string answer = "";
    while(!s.empty()){
        answer += (s.top() + '0');
        s.pop();
    }
    
    reverse(answer.begin(), answer.end());
    
    
    
    return answer;
}
