#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

// 二部グラフ判定
vector<int> color;
bool dfs(vector<vector<int>> &G, int v, int cur = 0) {
  color[v] = cur;
  for (auto next_v : G[v]) {
    // 隣接頂点がすでに色確定していた場合
    if (color[next_v] != -1) {
      // 同じ色が隣接した場合は二部グラフではない
      if (color[next_v] == cur) return false;

      // 色が確定した場合には探索しない
      continue;
    }

    // 隣接頂点の色を変えて、再帰的に探索
    // false が返ってきたら false を返す
    if (!dfs(G, next_v, 1 - cur)) return false;
  }
  return true;
}

void solve() {
  // 頂点数と辺数
  int N;
  cin >> N;

  // グラフ入力受取
  vector<vector<int>> G(N);
  for (int i = 1; i < N; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  // 探索
  color.assign(N, -1);
  bool is_bipartite = true;
  for (int v = 0; v < N; ++v) {
    if (color[v] != -1) continue; // v が探索済みの場合は探索しない
    if (!dfs(G, v)) is_bipartite = false;
  }
  // Step #3. Get Answer
  vector<int> G1, G2;
  for (int i = 0; i < N; i++) {
    if (color[i] == 0) G1.push_back(i+1);
    if (color[i] == 1) G2.push_back(i+1);
  }
  if (G1.size() > G2.size()) {
    for (int i = 0; i < (N / 2); i++) {
      if (i) cout << " ";
      cout << G1[i];
    }
    cout << endl;
  }
  else {
    for (int i = 0; i < (N / 2); i++) {
      if (i) cout << " ";
      cout << G2[i];
    }
    cout << endl;
  }

}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
