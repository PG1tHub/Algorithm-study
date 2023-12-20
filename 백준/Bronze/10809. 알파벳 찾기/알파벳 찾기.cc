#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;




int main() {
    string word;
    cin >> word;
    for(char c = 'a' ;c <= 'z'; c++ ){
         int index = word.find(c);
        if(index != string::npos){
            cout << index << " ";
        }
        else{
            cout << -1<< " ";
        }
    }
    cout << endl;
    
    return 0;
}
