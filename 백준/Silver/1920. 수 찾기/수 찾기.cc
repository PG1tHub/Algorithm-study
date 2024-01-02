#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N,M;
    int a;
    int t;
    vector <long long int> v;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin >> M;
    for(int i =0; i<M; i++){
        scanf("%d", &t);
        int target = t;
        bool found = binary_search(v.begin(), v.end(), target);
        printf("%d\n", found);
    }
    return 0;
}
            
