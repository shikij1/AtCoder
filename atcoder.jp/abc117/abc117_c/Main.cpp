#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int N, M;
  cin >> N >> M;
  vector<long long> X(M);
  for (int i = 0; i < M; ++i) cin >> X[i];
  sort(X.begin(), X.end());

  vector<long long> diffs;
  for (int i = 1; i < X.size(); ++i) diffs.push_back(X[i] - X[i - 1]);
  sort(diffs.begin(), diffs.end(), greater<long long>());

  long long res = X.back() - X[0];
  for (int i = 0; i < min((int)diffs.size(), N - 1); ++i) res -= diffs[i];
  cout << res << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
