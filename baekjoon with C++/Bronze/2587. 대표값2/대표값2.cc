#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;




int main() {
    int N,num;
    int num2 = 0;
    vector <int> v;
    for(int i=0; i<5; i++){
        cin >> num;
        num2 += num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    
    int avg,mid;
    avg = num2 / 5;
    mid = v[2];
    
    
    cout << avg << endl;
    cout << mid << endl;
    return 0;
}
