#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int N;
  cin >> N;
  map<string, int> mp;
  for (int i = 0; i < N; ++i) {
    string S;
    cin >> S;
    mp[S]++;
  }
  int ma = 0;
  string ans;
  for (auto e : mp) {
    if (ma < e.second) {
      ma = e.second;
      ans = e.first;
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
