#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;
#define int long long
const int mod = 1000000007;
// const int mod = 998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

template<typename T>
bool chmax(T &a, const T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template<class T>
bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

void solve() {
  long long n, a, x, y;
  cin >> n >> a >> x >> y;
  long long sum = 0;
  for (int i = 1; i <= n; ++i) {
    if (i<=a){
      sum += x;
    }
    else{
      sum += y;
    }
  }
  cout << sum << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
