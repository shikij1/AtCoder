#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int n, m;
  cin >> n >> m;
  vector<bool> issafe; // issafe[v] := v が壊れていないかどうか
  issafe.assign(n+1, true);

  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    issafe[a] = false; // a 段目は壊れてる

  }
  vector<long long> dp(n + 1);
  // 初期条件
  dp[0] = 1;
  if (issafe[1]) dp[1] = 1;
  for (int i = 2; i <= n; ++i) {
    if (issafe[i-1]) dp[i] += dp[i-1]; // i-1 段目が安全なら
    if (issafe[i-2]) dp[i] += dp[i-2]; // i-2 段目が安全なら
    dp[i] %= 1000000007; // 1000000007 で割る

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
