#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int n, k;
  long double c = 0;
  cin >> n >> k;
  vector<int> r(n);
  for (int i = 0; i < n; ++i) {
    cin >> r[i];
  }
  sort(r.begin(), r.end());
  for (int i = r.size() - k; i < r.size(); ++i) {
    c = (c + r[i])/2;
  }
  cout << c << '\n';

}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
