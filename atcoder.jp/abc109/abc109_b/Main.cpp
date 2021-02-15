#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_set<string> st;
    char prev;
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        if (i > 0) {
            if (prev != w[0]) {
                cout << "No" << '\n';
                return 0;
            }
        }
        if (st.count(w)) {
            cout << "No" << '\n';
            return 0;
        } else {
            st.insert(w);
        }
        prev = w.back();
    }
    cout << "Yes" << '\n';
}
