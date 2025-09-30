#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <map>
#include <queue>
#include <climits>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> p;
    vector<int> m;
    
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        if(a >= 0){
            p.push_back(a);
        }
        else if(a < 0){
            m.push_back(a);
        }
    }
    
    sort(p.begin(),p.end());
    sort(m.begin(),m.end());
    
    int ans1 = 0,ans2 = 0;
    int best = INT_MAX;
    if(m.size() == 0){
        ans1 = p[0];
        ans2 = p[1];
    }
    else if(p.size() == 0){
        ans1 = m[m.size()-2];
        ans2 = m[m.size()-1];
    }
    else{
        if(p.size() >= 2){
            int s = p[0] + p[1];
            int a = abs(s);
            if(a < best){
                best = a;
                ans1 = p[0];
                ans2 = p[1];
            }
        }
        
        if(m.size() >= 2){
            int s = m[m.size() -2] + m[m.size() - 1];
            int a = abs(s);
            if(a < best){
                best = a;
                ans1 = m[m.size() -2];
                ans2 = m[m.size() -1];
            }
        }
        
        for(int i = 0; i < m.size(); i++){
            int check = 0;
            check = abs(m[i]);
            
            int idx = (int)( lower_bound(p.begin(), p.end(), check) - p.begin()); // 가장 근접한 값의 들어갈 정렬 오른쪽 인덱스 값;
            
            if(idx < p.size()){
                int s1 = p[idx] + m[i];
                int a1 = abs(s1);
                if(a1 < best){
                    best = a1;
                    ans1 = m[i];
                    ans2 = p[idx];
                }
            }
            if(idx-1 >= 0){
                int s2 = p[idx - 1] + m[i];
                int a2 = abs(s2);
                if(a2 < best){
                    best = a2;
                    ans1 = m[i];
                    ans2 = p[idx-1];
                }
            }
        }
    }
    cout << ans1 << " " << ans2 << endl;
    
}
