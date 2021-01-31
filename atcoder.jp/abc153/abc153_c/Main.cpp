#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    sort(h.begin(), h.end());

    for (int i = 0; i < k; i++) {
        if (h.empty()) {
            break;
        }
        h.pop_back();
    }
    long long ans = 0;
    for (auto e : h) {
        ans += e;
    }
    cout << ans << endl;
}
