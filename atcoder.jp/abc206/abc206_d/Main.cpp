#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

/*  is_palindrome(s)
    入力：文字列 s
    出力：sが回文かの真偽値
    計算量：O(|s|)
*/
bool is_palindrome(string s) {
  return (s == string(s.rbegin(), s.rend()));
}

const int MAX = 210000;

void solve() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) cin >> A[i];
  dsu ds(MAX);
  for (int i = 0, j = N-1; i < j; ++i, --j) {
    ds.merge(A[i], A[j]);
  }
  long long res = 0;
  for (int v = 0; v < MAX; ++v) {
    if (ds.leader(v) == v) {
      res += ds.size(v) - 1;
    }
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
