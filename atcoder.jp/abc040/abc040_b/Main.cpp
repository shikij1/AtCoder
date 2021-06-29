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
  int ans = 1e8;
  for (int i = 0; i <= 1e4; ++i) {
    for (int j = 0; j <= 1e4; ++j) {
      if (i * j <= n) {
        ans = min(ans, abs(i - j) + (n - i * j));
      }
    }
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
