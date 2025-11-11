#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <queue>
#include <stack>
using namespace std;

int G;
vector<int> v;
int main(){
    cin >> G;
    
    int x = 2;
    int y = 1;
    
    while(x + y <= G){
        int G1 = (x + y) * (x - y);
        if(G1 < G){
            x++;
        }
        else if(G1 > G){
            y++;
        }
        else{
            v.push_back(x);
            y++;
        }
    }
    
    if(v.empty()){
        cout << -1 << endl;
    }
    else{
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << '\n';
        }
    }
    
}
