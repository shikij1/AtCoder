#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int Q;
  cin >> Q;
  deque<int> que;
  for (int i = 0; i < Q; ++i) {
    int t, x;
    cin >> t >> x;
    if (t==1){
      que.push_front(x);
    }
    else if (t==2){
      que.push_back(x);
    }
    else{
      x--;
      cout << que[x] << '\n';
    }
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
