#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;



int fib(int n) {
    int count =0;
    if ((n == 1 || n == 2)){
         return 1;
    }
    else {
        return (fib(n - 1) + fib(n - 2));
    }
}

int fibonacci(int n) {
    vector<int> f(100,-1);
    f[1] = 1;
    f[2] = 1;
    int count=0;
    for (int i = 3;i<=n;i++){
        f[i] = f[i - 1] + f[i - 2];
        count++;
        
    }
    return count;
}

int main(){
    int N;
    cin >> N;
    cout << fib(N) << " " << fibonacci(N) << endl;
    
}
