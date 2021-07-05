#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

/*  prime_factor(n)
    入力：整数 n
    出力：nの素因数分解
    計算量：O(√n)前後
*/
template<typename T>
vector<pair<T, T>> prime_factor(T n) {
  vector<pair<T, T>> ret;
  for (T i = 2; i * i <= n; i++) {
    if (n % i != 0) continue;
    T tmp = 0;
    while (n % i == 0) {
      tmp++;
      n /= i;
    }
    ret.push_back(make_pair(i, tmp));
  }
  if (n != 1) ret.push_back(make_pair(n, 1));
  return ret;
}

void solve() {
  long long n;
  cin >> n;
  vector<pair<long long, long long>> v;
  v = prime_factor(n);
  int num = 0;
  for (auto e : v) {
    num += e.second;
  }
  int ans = 1;
  for (int i = 0; i < 1e8; ++i) {
    if (num <= ans) {
      cout << i << '\n';
      return;
    }
    ans *= 2;
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
