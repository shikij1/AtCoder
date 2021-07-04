#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;
#define int long long
long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  int num = 9999;
  long long ans = 1e18;
  for (int i = 0; i <= num; ++i) {
    for (int j = 0; i + j <= num; ++j) {
      long long V = n -  i * a -  j * b;
      long long R =  i +  j + V / c;
      if (V% c != 0LL || V < 0 || R > 9999LL) continue;
      ans = min(ans, R);
    }
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
