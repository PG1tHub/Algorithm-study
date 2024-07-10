#include <iostream>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a;
    int fa,c=0;
    cin >> a;
    int check = a;
    while(true){
        fa = ((a%10)*10)+((a/10)+(a%10))%10;
        c++;
        a = fa;
        if(a==check){
            break;
        }
    }
    
    cout << c<<'\n';
}

