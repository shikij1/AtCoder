#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long ans = 0, x = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * i - x;
        x += a[i];
    }
    cout << ans << endl;
}
