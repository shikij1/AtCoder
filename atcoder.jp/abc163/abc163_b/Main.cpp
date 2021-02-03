#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m, a;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        n = n - a;
    }
    if (n < 0) {
        cout << -1 << endl;
    } else {
        cout << n << endl;
    }
}
