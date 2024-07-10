#include <iostream>
using namespace std;
int main()
{   int a,b,c;
    int r;
    cin >> a >> b >> c;
    if((a==b) && (b==c) ){
        r = 10000+ a*1000;
    }
    else if((a==b) || (b== c) ||(c==a)){
        if (a==b){
            r = 1000+ a*100;
        }
        else if (b==c){
            r = 1000+ b*100;
        }
        else {
            r = 1000 + c*100;
        }
    }
    else {
        if(a>b && a>c){
            r = a* 100;
        }
        else if (a<b && c<b){
            r = b * 100;
        }
        else if (a<c && b<c){
            r = c * 100;
        }
    }
    cout << r <<endl;
}
