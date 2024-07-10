#include <iostream>

using namespace std;

int main()
{
    
    int A,B;
    cin >> A;
    cin >> B;
    if(A>0 && B<10){
        cout.precision(12);
        // 출력 할 실수 전체 자리수를 n자리로 표현 
        cout << fixed;
        // 정수 부분은 신경쓰지 않고 소수점 아래로만 고정하고 싶은 경우
        cout << A/(double)B <<endl;
    }
    return 0;
}