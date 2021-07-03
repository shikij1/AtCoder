#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

const int INF = 2000000000;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int q;
  cin >> q;
  vector<int> b(q);
  a.push_back(INF);
  for (int i = 0; i < q; ++i) {
    cin >> b[i];
    auto iter = lower_bound(a.begin(), a.end(), b[i]);
    int pos1 = iter - a.begin();
    int Diff1 = INF, Diff2 = INF;
    if (pos1 <= n) Diff1 = abs(b[i] - a[pos1]);
    if (pos1 >= 1) Diff2 = abs(b[i] - a[pos1 - 1]);
    cout << min(Diff1, Diff2) << endl;
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
