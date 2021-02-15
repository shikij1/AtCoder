#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < (int)s.size(); i++) {
        if (90 < (s[i] + n)) {
            cout << char(s[i] + n - 90 + 64);
        } else {
            cout << char(s[i] + n);
        }
    }

    cout << endl;
}
