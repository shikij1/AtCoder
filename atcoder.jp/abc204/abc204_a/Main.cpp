#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int x, y;
  cin >> x >> y;
  if (x == y) {
    cout << x << '\n';
  } else {
    if (x + y == 1) {
      cout << 2 << '\n';
    } else if (x + y == 2) {
      cout << 1 << '\n';
    } else {
      cout << 0 << '\n';
    }
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
