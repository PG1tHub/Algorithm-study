#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <map>
#include <queue>
using namespace std;


int main(){
    int N,M;
    cin >> N >> M;
    map<string, int> voka;
    vector <pair<string,int>> v;
    
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        if((int)s.size() < M ){
            continue;
        }
        
        if(voka.count(s) == 0){
            voka[s] = 1;
        }
        else{
            voka[s] +=1;
        }
    }
    v.reserve(voka.size());
    
    for(pair<string,int> vk : voka){
        v.push_back(vk);
    }
    
    sort(v.begin(), v.end(),[](pair<string,int> a, pair<string,int> b) {
        if (a.second != b.second) { // 빈도순
            return a.second > b.second;
        }
        if (a.first.size() != b.first.size()) { // 길이순
            return a.first.size() > b.first.size();
        }
        return a.first < b.first;    // 사전순
      }
    );
    
    
    for (int i = 0; i < (int)v.size(); i++){
         cout << v[i].first << '\n';
    }
}

