#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int n;
  cin >> n;
  vector<pair<double, double>> v(n);
  for (int i = 0; i < n; ++i) {
    int t;
    cin >> t;
    double l, r;
    cin >> l >> r;
    if (t == 1) {
      v[i] = make_pair(l, r);
    } else if (t == 2) {
      v[i] = make_pair(l, r - 0.1);
    } else if (t == 3) {
      v[i] = make_pair(l + 0.1, r);
    } else if (t == 4) {
      v[i] = make_pair(l + 0.1, r - 0.1);
    }
  }
  int res = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i+1; j < n; ++j) {
      if (max(v[i].first, v[j].first) <= min(v[i].second, v[j].second)) {
        ++res;
      }
    }
  }
  cout << res << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
