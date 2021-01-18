#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, X;
    string S;
    cin >> N >> X >> S;
    for(char c : S){
        if(c == 'o')
            X++;
        else if(X)
            X--;
    }
    cout << X << endl;
}
