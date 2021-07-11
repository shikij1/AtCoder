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
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  vector<long long> b(n);
  for (int i = 0; i < n; ++i) {
    b[i] = a[i] - (i + 1);
  }
  nth_element(b.begin(), b.begin() + (int)b.size() / 2, b.end());
  long long ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += abs(b[(int)b.size() / 2] - b[i]);
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
