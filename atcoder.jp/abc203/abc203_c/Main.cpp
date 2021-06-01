#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long n, k;
  cin >> n >> k;
  map<long long, long long> mp;
  for (int i = 0; i < n; ++i) {
    long long a, b;
    cin >> a >> b;
    mp[a] += b;
  }
  long long ans = 0;
  long long now = 0;
  for (auto e : mp) {
    if (e.first - now <= k) {
      k -= (e.first - now);
      k += e.second;
      ans += e.first - now;
    } else {
      break;
    }
    now = e.first;
  }
  ans += k;
  cout << ans << '\n';
  
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
