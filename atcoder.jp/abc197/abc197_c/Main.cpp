#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }
#define int long long

void solve() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  int ans = 1e10;
  for (int bit = 0; bit < (1 << (N - 1)); bit++) {
    int score = 0, cur = 0;
    for (int i = 0; i < N ; i++) {
      cur |= A[i];
      if (bit & (1 << i)) {
        score ^= cur;
        cur = 0;
      }
    }
    score ^= cur;
    ans = min(ans, score);
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
