#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int n, q;
  cin >> n >> q;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  vector<long long> c(n);
  for (int i = 0; i < n; ++i) {
    c[i] = a[i] - i - 1;
  }

  for (int i = 0; i < q; ++i) {
    long long k;
    cin >> k;
    auto iter = lower_bound(c.begin(), c.end(), k);
    int index = iter - c.begin();
    long long ans = 0;
    if (index == 0) {
      ans = k;
    } else {
      ans = a[index - 1] + (k - c[index - 1]);
    }
    cout << ans << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
