#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  string s;
  cin >> s;
  for (int i = 0; i < (int)s.size(); ++i) {
    if (s[i] == '6') {
      s[i] = '9';
    } else if (s[i] == '9') {
      s[i] = '6';
    }
  }
  reverse(s.begin(), s.end());
  cout << s << '\n';
  
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
