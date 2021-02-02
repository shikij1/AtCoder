#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p;
    cin >> n;
    set<int> st;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> p;
        st.insert(p);
        if (*st.begin() >= p) {
            count++;
        }
    }
    cout << count << endl;
}
