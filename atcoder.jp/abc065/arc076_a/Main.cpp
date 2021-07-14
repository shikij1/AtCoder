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
  mint N = n, M = m;
  if (abs(n-m) >=2){
    cout << 0 << '\n';
  }
  else{
    if (n==m){
      mint ans = 1;
      for (int i = 1; i <= n; ++i) {
        mint res = i;
        ans *= res;
      }
      for (int i = 1; i <= m; ++i) {
        mint res = i;
        ans *= res;
      }
      ans *= 2;
      cout << ans.val() << '\n';
    }
    else{
      mint ans = 1;
      for (int i = 1; i <= n; ++i) {
        mint res = i;
        ans *= res;
      }
      for (int i = 1; i <= m; ++i) {
        mint res = i;
        ans *= res;
      }
      cout << ans.val() << '\n';
    }
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
