#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long N;
  cin >> N;
  long long ans = 0, cnt = 1;
  vector<long long> a(N);
  for (long long i = 0; i < N; ++i) {
    cin >> a[i];
  }
  for (long long i = 1; i < N; ++i) {
    ans += cnt;
    if (a[i] > a[i - 1]) {
      cnt++;
    } else {
      cnt = 1;
    }
  }
  ans += cnt;
  cout << ans << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
