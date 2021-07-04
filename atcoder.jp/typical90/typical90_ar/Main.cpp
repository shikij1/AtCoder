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
  deque<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < q; ++i) {
    long long t, x, y;
    cin >> t >> x >> y;
    --x;
    --y;
    if (t == 1) {
      swap(a[x], a[y]);
    } else if (t == 2) {
      long long tmp = a.back();
      a.pop_back();
      a.push_front(tmp);
    } else if (t == 3) {
      cout << a[x] << '\n';
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
