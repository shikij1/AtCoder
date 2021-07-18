#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

// 入力: グラフ G と，探索の始点 s
// 出力: s から各頂点への最短路長を表す配列
vector<int> BFS(const vector<vector<int>> &G, int s) {
  int N = (int)G.size(); // 頂点数
  vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
  queue<int> que;

  // 初期条件 (頂点 s を初期頂点とする)
  dist[s] = 0;
  que.push(s); // s を橙色頂点にする

  // BFS 開始 (キューが空になるまで探索を行う)
  while (!que.empty()) {
    int v = que.front(); // キューから先頭頂点を取り出す
    que.pop();

    // v からたどれる頂点をすべて調べる
    for (int x : G[v]) {
      // すでに発見済みの頂点は探索しない
      if (dist[x] != -1) continue;

      // 新たな白色頂点 x について距離情報を更新してキューに挿入
      dist[x] = dist[v] + 1;
      que.push(x);
    }
  }
  return dist;
}

void solve() {
  int N, Q;
  cin >> N >> Q;
  vector<vector<int>> G(N);
  for (int i = 0; i < N - 1; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  vector<int> dist = BFS(G, 0);
  for (int i = 0; i < Q; ++i) {
    int c, d;
    cin >> c >> d;
    --c;
    --d;
    int ans = (dist[c] + dist[d]) % 2;
    if (ans == 0) {
      cout << "Town" << '\n';
    } else {
      cout << "Road" << '\n';
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
