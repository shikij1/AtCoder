#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> G(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  for (int i = 0; i < N; ++i) {
    set<int> st;
    for (auto e1 : G[i]) {
      for (auto e2 : G[e1]) {
        if (i == e2) {
          continue;
        } else {
          st.insert(e2);
        }
      }
    }
    for (auto e1 : G[i] ) {
      st.erase(e1);
    }
    cout << (int)st.size() << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
