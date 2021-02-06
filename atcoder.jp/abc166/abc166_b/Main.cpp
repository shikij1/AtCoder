#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    set<int> st;
    int a, d;
    for (int i = 0; i < k; i++) {
        cin >> d;
        for (int j = 0; j < d; j++) {
            cin >> a;
            st.insert(a);
        }
    }
    cout << n - (int)st.size() << endl;
}
