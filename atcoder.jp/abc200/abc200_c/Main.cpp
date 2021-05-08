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
  vector<long long> a(N), b(201);
  map<long long, long long> mp;
  for (int i = 0; i < N; ++i) {
    cin >> a[i];
    b[a[i] % 200]++;
  }
  long long ans = 0;
  for (int i = 0; i <= 200; ++i) {
    if (b[i] == 1){
      continue;
    }
    ans += (b[i] * (b[i] - 1)) / 2;
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
