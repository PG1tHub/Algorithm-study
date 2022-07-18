#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int main(){
    stack<int> st;
    int n;
    int a[80000];
    long long add = 0;
    cin >> n;
    
    for (int i=0; i<n ;i++){
        cin >> a[i];
    }

    for(int i=0; i<n ;i++){
        while(!st.empty() && st.top()<=a[i]){ // 스택의 탑 값이 빌딩보다 작으면 pop 한다.
            st.pop();
        }
        st.push(a[i]); //  빌딩의 높이 스택에 push
        add += st.size() -1; // 관리인이 볼수 있는 값은 st 사이즈에서 -1을 한 값을 add 에 추가한다.
    }
    cout << add <<endl;
}
