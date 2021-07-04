#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int n, l;
  cin >> n >> l;
  vector<long long> dp(n + 1);
  dp[0] = 1;
  for (int i = 1; i <= n; ++i) {
    if (i < l) {
      dp[i] = dp[i - 1];
    } else {
      dp[i] = (dp[i - 1] + dp[i - l]) % 1000000007;
    }
  }
  cout << dp[n] << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
