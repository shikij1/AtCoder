#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  long long summ = a, sumr = 0;
  for (int i = 0; i < 1e8; ++i) {
    if (summ <= sumr*d){
      cout << i << '\n';
      return;
    }
    summ += b;
    sumr += c;
  }
  cout << -1 << '\n';

}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
