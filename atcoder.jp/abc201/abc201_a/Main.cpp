#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  vector<int> v(3);
  for (int i = 0; i < 3; ++i) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  if (v[2] - v[1] == v[1] - v[0]) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
