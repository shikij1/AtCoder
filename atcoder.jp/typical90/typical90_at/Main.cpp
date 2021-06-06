#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int N;
  cin >> N;
  vector<int> a(46), b(46), c(46);
  for (int i = 0; i < N; ++i) {
    int A;
    cin >> A;
    a[A % 46]++;
  }
  for (int i = 0; i < N; ++i) {
    int B;
    cin >> B;
    b[B % 46]++;
  }
  for (int i = 0; i < N; ++i) {
    int C;
    cin >> C;
    c[C % 46]++;
  }
  long long ans = 0;
  for (int i = 0; i < 46; ++i) {
    for (int j = 0; j < 46; ++j) {
      for (int k = 0; k < 46; ++k) {
        if ((i + j + k) % 46 == 0){
          ans += (long long)(a[i]) * b[j] * c[k];
        }
      }
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
