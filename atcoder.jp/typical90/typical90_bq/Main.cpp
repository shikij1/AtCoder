#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

const int mod = 1000000007;
int binpower(int a, long long b) {
  int ans = 1;
  while (b != 0) {
    if (b % 2 == 1) {
      ans = (long long)(ans)*a % mod;
    }
    a = (long long)(a)*a % mod;
    b /= 2;
  }
  return ans;
}

void solve() {
  long long N; int K;
  cin >> N >> K;
  if (K == 1) {
    cout << (N == 1 ? 1 : 0) << endl;
  }
  else if (N == 1) {
    cout << K % mod << endl;
  }
  else if (N == 2) {
    cout << (long long)(K) * (K - 1) % mod << endl;
  }
  else {
    cout << (long long)(K) * (K - 1) % mod * binpower(K - 2, N - 2) % mod << endl;
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
