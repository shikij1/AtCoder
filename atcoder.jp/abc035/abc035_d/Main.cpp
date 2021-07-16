#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

const int mod = 1000000007;
// const int mod = 998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

template<typename T>
bool chmax(T &a, const T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template<class T>
bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

// 辺を表す型，ここでは重みを表す型を long long 型とします
struct Edge {
  int to; // 隣接頂点番号
  long long w; // 重み
  Edge(int to, long long w) : to(to), w(w) {}
};

// 重み付きグラフを表す型
using Graph = vector<vector<Edge>>;
// 無限大を表す値 (ここでは 2^60 とする)
const long long INF = 1LL << 60;

/* dijkstra(G,s,dis)
    入力：グラフ G, 開始点 s, 距離を格納する dis
    計算量：O(|E|log|V|)
    副作用：dis が書き換えられる
*/
void dijkstra(const Graph &G, int s, vector<long long> &dist) {
  int N = G.size();
  dist.resize(N, INF);
  dist[s] = 0;

  // (d[v], v) のペアを要素としたヒープを作る
  priority_queue<pair<long long, int>,
                 vector<pair<long long, int>>,
                 greater<pair<long long, int>>> que;
  que.push(make_pair(dist[s], s));

  // ダイクストラ法の反復を開始
  while (!que.empty()) {
    // v: 使用済みでない頂点のうち d[v] が最小の頂点
    // d: v に対するキー値
    int v = que.top().second;
    long long d = que.top().first;
    que.pop();

    // d > dist[v] は，(d, v) がゴミであることを意味する
    if (d > dist[v]) continue;
    // 頂点 v を始点とした各辺を緩和
    for (auto e : G[v]) {
      if (chmin(dist[e.to], dist[v] + e.w)) {
        // 更新があるならヒープに新たに挿入
        que.push(make_pair(dist[e.to], e.to));
      }
    }
  }
}

void solve() {
  // 頂点数，辺数，始点
  int N, M, t;
  cin >> N >> M >> t;
  vector<long long> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  // グラフ
  Graph G(N), Gr(N);
  for (int i = 0; i < M; ++i) {
    int a, b, w;
    cin >> a >> b >> w;
    --a;
    --b;
    G[a].push_back(Edge(b, w));
    Gr[b].push_back(Edge(a, w));
  }
  vector<long long> dist, dist2;

  dijkstra(G, 0, dist);
  dijkstra(Gr, 0, dist2);

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    long long need = dist[i] + dist2[i];
    if (need > t) continue;
    ans = max(ans, (t - need) * A[i]);
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
