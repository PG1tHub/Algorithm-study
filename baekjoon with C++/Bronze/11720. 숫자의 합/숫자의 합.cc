#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;




int main() {
    int size;
    int sum =0;
    string input;
    cin >> size;
    
    cin >> input;
    for (char digit : input){
        sum += digit - '0';
    }
    
    cout << sum << endl;
   
//    charArray[i] != '\0'
    
    
    
    
    return 0;
}
