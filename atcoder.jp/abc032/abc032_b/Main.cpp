#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  string s;
  int k;
  cin >> s >> k;

  if ((int)s.size()<k){
    cout << 0 << '\n';
    return;
  }

  set<string> st;
  for (int i = 0; i < (int)s.size(); ++i) {
    if (s.substr(i, k).size()==k){
      st.insert(s.substr(i, k));
    }
  }
  cout << (int)st.size() << '\n';
  
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
