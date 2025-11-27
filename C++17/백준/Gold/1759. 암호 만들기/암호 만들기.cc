#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
using namespace std;

int L, C;
vector<char> v;

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void dfs(int idx, int depth, int vowel, int consonant, string s){
    if(depth == L){
        if(vowel >= 1 && consonant >= 2){
            cout << s << '\n';
        }
        return;
    }
    
    if(idx == C) return;
    
    for(int i = idx; i < C; ++i){
        char c = v[i];
        if(isVowel(c)){
            dfs(i + 1, depth + 1, vowel + 1, consonant, s + c);
        }else{
            dfs(i + 1, depth + 1, vowel, consonant + 1, s + c);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> L >> C;
    v.assign(C, 0);
    
    for(int i = 0; i < C; ++i){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    dfs(0, 0, 0, 0, "");
    
    return 0;
}
