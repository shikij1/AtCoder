#include<bits/stdc++.h>
using namespace std;
int main() {
    long long a,ans;
    string s;
    string t= "";
    cin >> a >> s;
    t = t + s[0] + s[2] + s[3];
    int b = stoi(t);
    ans = a*b;
    cout << ans /100 <<endl;
}
