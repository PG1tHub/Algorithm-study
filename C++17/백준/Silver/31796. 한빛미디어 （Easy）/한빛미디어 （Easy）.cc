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
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        v[i] = a;
    }
    
    int page = 0;
    int min = 0;
    sort(v.begin(),v.end());
    for(int i = 0; i < N; i++){
        if (page == 0) {
            page = 1;
            min = v[i];
        }
        else if(v[i]  >= 2 * min){
            page ++ ;
            min = v[i];
        }
    }
    cout << page << endl;
}
