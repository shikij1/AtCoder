#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, t;
    cin >> s;
    int cnt = 0;
    int n = (int)s.size();
    t = string(s.rbegin(), s.rend());
    for (int i = 0; i < n; i++) {
        t = string(s.rbegin(), s.rend());
        if (s[i] != t[i]) {
            cnt++;
        }
    }

    cout << cnt / 2 << endl;
}
