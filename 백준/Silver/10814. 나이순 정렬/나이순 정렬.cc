#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <list>
using namespace std;


bool comp(pair <int,pair<string,int>> a, pair <int,pair<string,int>> b){
    if(a.first == b.first){
        return a.second.second<b.second.second ;
    }
    return a.first < b.first;
}

int main() {
    int N;
    int age;
    string name;
    cin >> N;
    vector<pair<int, pair<string, int>>> v;
    for(int i =0; i < N; i++){
        cin >> age >> name;
        v.push_back(make_pair(age,make_pair(name,i)));
    }
    sort(v.begin(),v.end(),comp);
    for(int i = 0; i<v.size(); i++){
        cout << v[i].first << " " << v[i].second.first << '\n';
    }
    return 0;
}
            

