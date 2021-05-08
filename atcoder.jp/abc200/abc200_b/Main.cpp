#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long N, K;
  cin >> N >> K;
  for (long long i = 0; i < K; ++i) {
    if (N % 200 == 0) {
      N /= 200;
    }
    else{
      string s;
      s = to_string(N);
      s += "200";
      N = stol(s);
    }
  }
  cout << N << '\n';
  
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
