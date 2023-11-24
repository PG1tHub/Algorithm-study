#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
     
    string str;
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        cin >> str;
        cout << str.front() << str.back() <<endl;
    }
    return 0;
}
