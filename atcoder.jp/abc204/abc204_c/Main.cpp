#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

struct UnionFind {
  vector<int> par, siz;

  UnionFind(int n) : par(n, -1), siz(n, 1) {}

  // 根を求める
  int root(int x) {
    if (par[x] == -1) return x;
    else return par[x] = root(par[x]);
  }

  // xとyが同じグループに属するかどうか（根が一致するかどうか）
  bool issame(int x, int y) {
    return root(x) == root(y);
  }

  // xを含むグループとyを含むグループとを合併する
  bool unite(int x, int y) {
    x = root(x), y = root(y);
    if (x == y) return false;
    if (siz[x] < siz[y]) swap(x, y);
    par[y] = x;
    siz[x] += siz[y];
    return true;
  }

  // xを含むグループのサイズ
  int size(int x) {
    return siz[root(x)];
  }
};

using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
int ans = 0;
void dfs(const Graph &G, int v) {
  seen[v] = true; // v を訪問済にする
  ans++;

  // v から行ける各頂点 next_v について
  for (auto next_v : G[v]) {
    if (seen[next_v]) {
      continue; // next_v が探索済だったらスルー
    }
    dfs(G, next_v); // 再帰的に探索
  }
}

void solve() {
  // 頂点数と辺数、s と t
  int N, M;
  cin >> N >> M;

  // グラフ入力受取
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
  }
  for (int i = 0; i < N; ++i) {
      // 頂点 s をスタートとした探索
      seen.assign(N, false); // 全頂点を「未訪問」に初期化
      dfs(G, i);
  }

  cout << ans << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
