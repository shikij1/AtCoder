#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

#define int long long
long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n), b(n), c(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> c[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  long long ans = 0;
  for (int i = 0; i < n; ++i) {
    auto iter = lower_bound(a.begin(), a.end(), b[i]);
    int index = iter - a.begin();

    auto iter2 = upper_bound(c.begin(), c.end(), b[i]);
    int index2 = iter2 - c.begin();
    int cn = n - index2;
    ans += index * cn;
  }
  cout << ans << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
