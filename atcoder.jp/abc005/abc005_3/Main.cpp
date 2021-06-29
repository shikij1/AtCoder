#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int t, n, m;
  cin >> t >> n;
  vector<int> a(101);
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    a[tmp]++;
  }
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  if (n < m) {
    cout << "no" << '\n';
    return;
  }
  for (int i = 0; i < m; ++i) {
    bool flag = false;
    for (int j = 1; j <= 100; ++j) {
      if (a[j]){
        a[j]--;
        if (j <= b[i] && b[i] <= j + t){
          flag = true;
          break;
        }
      }
    }
    if (!flag){
      cout << "no" << '\n';
      return;
    }
  }
  cout << "yes" << '\n';
  
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
