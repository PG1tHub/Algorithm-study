#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int main(){
    vector<char> v;
    stack<char> st;
    string s;
    int n;
    getline(cin,s);
    n=stoi(s);
    for(int i=0;i<n;i++){
        getline(cin,s);
        for(int j=0;j<s.size();j++){
            if(s[j]==' ' || s[j]== '\n'){
                while (!st.empty()) {
                    v.push_back(st.top());
                    st.pop();
                }
                v.push_back(s[j]); // 스페이스바나 엔터를 만났을때 추가
            }
            else{
                st.push(s[j]);
            }
        }
        while (!st.empty()) { // 마지막 처리
            v.push_back(st.top());
            st.pop();
        }
        v.push_back('\n');
        
    }
    for(int k=0;k<v.size();k++){
        cout << v[k];
    }
   
}
