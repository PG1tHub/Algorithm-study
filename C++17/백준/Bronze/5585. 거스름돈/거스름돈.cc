
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<utility>
using namespace std;

int main(){
    int N;
    cin >> N;
    int count = 0;
    N = 1000 - N;
    while(N>0){
        if(N>=500){
            count += (N/500);
            N = N - (500 * (N/500));
        }
        
        else if(N>=100 && N<500){
            count += (N/100);
            N = N % 100;
        }
        
        else if(N>=50 && N<100){
            count += (N/50);
            N = N % 50;
        }
        
        else if(N>=10 && N<50){
            count += (N/10);
            N = N % 10;
        }
        else if(N>=5 && N<10){
            count += (N/5);
            N = N % 5;
        }
        else{
            count += (N/1);
            N = N % 1;
        }
    }
    cout << count << endl;
    return 0;
}

;
