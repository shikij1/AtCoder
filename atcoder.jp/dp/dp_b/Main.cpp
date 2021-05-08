#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long INF = 1e18;
  long long N, K;
  cin >> N >> K;
  vector<long long> h(N);
  vector<long long> dp(N, INF);
  for (int i = 0; i < N; ++i) {
    cin >> h[i];
  }
  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);
  for (int i = 2; i < N; ++i) {
    long long mi = 1e18;
    for (int j = 1; j <= K; ++j) {
      if (i < j) {
        break;
      }
      mi = min(dp[i - j] + abs(h[i] - h[i - j] ), mi);
    }
    dp[i] = mi;
  }
  cout << dp[N - 1] << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
