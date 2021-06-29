#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int x = x2;
  int y = y2;
  int dx = x2 - x1;
  int dy = y2 - y1;
  for (int i = 0; i < 2; ++i) {
    if (i>0){
      cout << ' ';
    }
    swap(dx, dy);
    dx = -dx;
    x += dx;
    y += dy;
    cout << x << ' ' << y;
  }
  cout << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
