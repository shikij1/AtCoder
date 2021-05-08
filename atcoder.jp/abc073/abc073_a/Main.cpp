#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int N;
  cin >> N;
  while (true) {
    if (N % 10 == 9){
      cout << "Yes" << '\n';
      return;
    }
    N /= 10;
    if (N % 10 == 0){
      break;
    }
  }
  cout << "No" << '\n';
  
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
