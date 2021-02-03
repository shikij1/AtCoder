#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    long long ans = 1e10;
    for (int i = 0; i < n - k + 1; i++) {
        ans = min(a[i+k-1] - a[i], ans);
    }
    cout << ans << endl;
}
