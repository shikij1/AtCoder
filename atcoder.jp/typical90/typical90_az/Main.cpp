#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }
int N;


void solve() {
  cin >> N;
  vector<vector<mint>> a(N, vector<mint>(6));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < 6; ++j) {
      int tmp;
      cin >> tmp;
      a[i][j] = tmp;
    }
  }
  mint ans = 1;
  for (int i = 0; i < N; ++i) {
    mint p = a[i][0] + a[i][1] + a[i][2] + a[i][3] + a[i][4] + a[i][5];
    ans *= p;
  }
  cout << ans.val() << '\n';
  
  
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
