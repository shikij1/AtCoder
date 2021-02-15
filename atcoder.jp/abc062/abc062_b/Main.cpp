#include<bits/stdc++.h>
using namespace std;
int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> v(h+2, vector<char>(w+2,'#'));
    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            cin >> v[i+1][j+1];
        }
    }
    for(int i = 0;i<h+2;i++){
        for(int j = 0;j<w+2;j++){
            cout << v[i][j];
        }
        cout << '\n';
    }
}
