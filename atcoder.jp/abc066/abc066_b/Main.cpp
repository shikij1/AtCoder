#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < (int)s.size(); i++) {
        s.pop_back();
        if ((int)s.size() % 2 == 0) {
            string t;
            t = s.substr(0, (int)s.size() / 2) + s.substr(0, (int)s.size() / 2);
            if (s == t) {
                cout << (int)s.size() << endl;
                return 0;
            }
        }
    }
    cout << 2 << endl;
}
