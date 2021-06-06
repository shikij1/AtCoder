#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < i; ++j) {
      for (int k = 0; k < j; ++k) {
        for (int l = 0; l < k; ++l) {
          for (int m = 0; m < l; ++m) {
            if (1LL * A[i] * A[j] % P * A[k] % P * A[l] % P * A[m] % P == Q) {
              ++ans;
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
