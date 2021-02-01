#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n, a;
    cin >> k >> n;
    a = k - 1;
    for (int i = n - a; i <= n + a; i++) {
        cout << i;
        if (i < n + a) {
            cout << ' ';
        }
    }
    cout << '\n';
}
