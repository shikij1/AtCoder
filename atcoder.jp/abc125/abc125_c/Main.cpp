#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }

void solve() {
  int N; cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];

  // 累積 GCD (左と右両方)
  vector<int> left(N+1, 0), right(N+1, 0);
  for (int i = 0; i < N; ++i) left[i+1] = gcd(left[i], a[i]);
  for (int i = N-1; i >= 0; --i) right[i] = gcd(right[i+1], a[i]);

  // 集計
  int res = 0;
  for (int i = 0; i < N; ++i) {
    // 左側
    int l = left[i];

    // 右側
    int r = right[i+1];

    // 更新
    chmax(res, gcd(l, r));
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
