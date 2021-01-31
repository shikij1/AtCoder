#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<string> st;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        st.insert(s);
    }
    for (auto e : st) {
        if (st.count('!' + e)) {
            cout << e << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}
