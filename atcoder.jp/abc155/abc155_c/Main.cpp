#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    int ma = -1;
    vector<string> res;
    set<string> st;
    for (int i = 0; i < n; i++) {
        cin >> s;
        mp[s] += 1;
        if (mp[s] > ma) {
            st = {};
            ma = mp[s];
            st.insert(s);
        } else if (mp[s] == ma) {
            st.insert(s);
        }
    }
    for (auto s : st) {
        cout << s << '\n';
    }
}
