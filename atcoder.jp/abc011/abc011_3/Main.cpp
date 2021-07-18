#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

const int mod = 1000000007;
// const int mod = 998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

template<typename T>
bool chmax(T &a, const T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template<class T>
bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

void solve() {
  int INF = 1e8;
  int n, ng1, ng2, ng3;
  cin >> n >> ng1 >> ng2 >> ng3;
  vector<int> dp(n + 1, INF);
  dp[n] = 0;
  for (int i = n; i >= 0; --i) {
    if (i == ng1 || i == ng2 || i == ng3) {
      continue;
    }
    for (int j = 1; j <= 3; ++j) {
      if (i - j < 0) {
        continue;
      }
      dp[i - j] = min(dp[i] + 1, dp[i - j]);
    }
  }
  if (dp[0] <= 100) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
