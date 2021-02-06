#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int prev, now;
    cin >> prev;
    for (int i = 1; i < n; i++) {
        cin >> now;
        if (now > prev) {
            prev = now - 1;
        } else if (now == prev) {
            prev = now;
        } else {
            cout << "No" << '\n';
            return 0;
        }
    }
    cout << "Yes" << '\n';
}
