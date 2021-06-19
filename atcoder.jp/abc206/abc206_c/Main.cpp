#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long n;
  cin >> n;
  map<long long, long long> mp;
  for (int i = 0; i < n; ++i) {
    long long a;
    cin >> a;
    mp[a]++;
  }
  long long sum = 0;
  for (auto e : mp) {
    sum += e.second*(e.second-1)/2;
  }
  long long res = (n*(n-1)/2)-sum;
  cout << res << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
