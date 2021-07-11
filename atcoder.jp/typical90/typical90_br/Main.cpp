#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {	int N;
  cin >> N;
  vector<int> X(N), Y(N);
  for (int i = 0; i < N; ++i) {
    cin >> X[i] >> Y[i];
  }
  nth_element(X.begin(), X.begin() + X.size() / 2, X.end());
  nth_element(Y.begin(), Y.begin() + Y.size() / 2, Y.end());
  long long ans = 0;
  for (int i = 0; i < N; ++i) {
    ans += abs(X[i] - X[N / 2]);
    ans += abs(Y[i] - Y[N / 2]);
  }
  cout << ans << endl;
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
