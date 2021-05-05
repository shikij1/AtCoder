#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

#define int long long

void solve() {
  int N;
  cin >> N;
  vector<long long> A(N), S(N + 1), M(N + 1);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
    S[i + 1] = S[i] + A[i];
    M[i + 1] = max(M[i], S[i + 1]);
  }
  long long res = 0, cur = 0;
  for (int i = 0; i < N; ++i) {
    res = max(res, cur + M[i + 1]);
    cur += S[i + 1];
  }
  cout << res << endl;
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
