#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string number;
    cin >> number;
    vector<int> v;
    int order = pow(10,number.size()-1);
    int num = stoi(number);
    while(order>0){
        v.push_back(num/order);
        num = num % order ;
        order = order / 10;
        if(order == 1){
            v.push_back(num / 1);
            break;
        }
    }
    
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i = 0; i<v.size(); i++){
        cout << v[i];
    }
    
    return 0;
}
