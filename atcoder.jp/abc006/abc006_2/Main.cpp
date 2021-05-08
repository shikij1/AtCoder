#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

int mod = 10007;
vector<int> memo(1e6 + 1, -1);
int tri(int n) {
  if (memo[n] != -1) return memo[n];
  return memo[n] = (tri(n - 3) + tri(n - 2) + tri(n - 1)) % mod;
}
void solve() {
  int n;
  cin >> n;
  memo[1] = 0;
  memo[2] = 0;
  memo[3] = 1;
  cout << tri(n) << endl;
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
