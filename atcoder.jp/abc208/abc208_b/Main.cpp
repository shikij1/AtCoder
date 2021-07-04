#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long p;
  cin >> p;
  vector<long long> c(11, 1);

  for (int i = 1; i <= 10; ++i) {
    for (int j = 1; j <= i; ++j) {
      c[i] *= j;
    }
  }
  int ans = 0;
  for (int i = 10; i >= 1; --i) {
    while (1) {
      if (p - c[i] >= 0) {
        ans++;
        p -= c[i];
      } else {
        break;
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
