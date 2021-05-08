#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long X;
  cin >> X;
  for (long long i = -300; i < 300; ++i) {
    for (long long j = -300; j < 300; ++j) {
      if (X == i * i * i * i * i - j * j * j * j * j) {
        cout << i << ' ' << j << '\n';
        return;
      }
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
