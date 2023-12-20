#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;




int main() {
    int N,k;
    int x;
    vector <int> v;
    cin >> N >> k;
    for(int i=0; i<N; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(),v.end());
    
    cout << v[k-1] << endl;
    return 0;
}
