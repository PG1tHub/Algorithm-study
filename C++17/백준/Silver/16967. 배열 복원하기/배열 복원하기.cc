#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
int main() {
    int N,M;
    cin >> N >> M;
    int x,y;
    cin >> x >> y;
    vector<vector<int>> v(N+x+1, vector<int>(M+y+1,0));
    vector<vector<int>> v2(N+1, vector<int>(M+1,0));
    for(int i=0; i<N+x; i++){
        for(int j=0; j<M+y; j++ ){
            int a;
            cin >> a;
            v[i][j] = a;
        }
    }
    
    for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (i >= x && j >= y) {
                    v2[i][j] = v[i][j] - v2[i - x][j - y];
                } else {
                    v2[i][j] = v[i][j];
                }
            }
        }
    
    for (int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout <<v2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
