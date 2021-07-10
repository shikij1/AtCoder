#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int n, x;
  cin >> n >> x;
  long long sum = 0;
  for (int i = 1; i <= n; ++i) {
    int a;
    cin >> a;
    if (i%2==0){
      sum += a-1;
    }
    else{
      sum += a;
    }
  }
  if (sum<=x){
    cout << "Yes" << '\n';

  }
  else{
    cout << "No" << '\n';

  }

}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
