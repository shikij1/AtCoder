#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }
#define int long long
void solve() {
  string s;
  cin >> s;
  int n = (int)s.size() + 1;
  vector<int> a(n);
  for (int i = 0; i < (int)s.size(); ++i) {
    if (s[i] == '<') {
      a[i + 1] = max(a[i + 1], a[i] + 1);
    }
  }
  for (int i = (int)s.size() - 1; i >= 0; --i) {
    if (s[i] == '>') {
      a[i] = max(a[i], a[i + 1] + 1);
    }
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += a[i];
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
