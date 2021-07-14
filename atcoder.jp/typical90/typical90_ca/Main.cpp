#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int H, W;
  cin >> H >> W;
  vector<vector<long long> > A(H, vector<long long>(W)), B(H, vector<long long>(W));
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cin >> B[i][j];
    }
  }

  long long ans = 0;
  for (int i = 0; i < H - 1; ++i) {
    for (int j = 0; j < W - 1; ++j) {
      int d = B[i][j] - A[i][j];
      A[i][j] += d;
      A[i][j + 1] += d;
      A[i + 1][j] += d;
      A[i + 1][j + 1] += d;
      ans += abs(d);
    }
  }
  if (A == B) {
    cout << "Yes" << endl;
    cout << ans << endl;
  }
  else {
    cout << "No" << endl;
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
