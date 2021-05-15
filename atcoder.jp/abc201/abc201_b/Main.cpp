#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int n;
  cin >> n;
  
  vector<pair<int, string>> vec(n);
  for (int i = 0; i < n; ++i) {
    string s;
    int t;
    cin >> s >> t;
    vec[i] = make_pair(-t, s);
  }
  sort(vec.begin(), vec.end());
  cout << vec[1].second << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
