#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<cassert>
#include<complex>
#include<numeric>
#include<array>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0, i##_len=(n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len=(n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const double pi = acos(-1.0);
const ll mod = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

ll mod_pow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

struct UnionFind {
  vector<int> par, siz;

  UnionFind(int n) : par(n, -1), siz(n, 1) {}

  // �������
  int root(int x) {
    if (par[x] == -1) return x;
    else return par[x] = root(par[x]);
  }

  // x �� y ��Ʊ�����롼�פ�°���뤫�ɤ��� (�������פ��뤫�ɤ���)
  bool issame(int x, int y) {
    return root(x) == root(y);
  }

  // x ��ޤ॰�롼�פ� y ��ޤ॰�롼�פȤ�ʻ�礹��
  bool unite(int x, int y) {
    x = root(x), y = root(y);
    if (x == y) return false;
    if (siz[x] < siz[y]) swap(x, y);
    par[y] = x;
    siz[x] += siz[y];
    return true;
  }

  // x ��ޤ॰�롼�פΥ�����
  int size(int x) {
    return siz[root(x)];
  }
};

void solve() {
  int n, m;
  cin >> n >> m;
  int res = 0;
  vector<pair<int, int>> vec;
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    vec.push_back(make_pair(a, b));
  }
  for (int i = 0; i < m; ++i) {
    UnionFind uf(n + 1);
    int u, v;
    for (int j = 0; j < m; ++j) {
      if (i == j) {
        tie(u, v) = vec[j];
        continue;
      }
      int a, b;
      tie(a, b) = vec[j];
      uf.unite(a, b);
    }
    if (uf.root(u) != uf.root(v)) {
      res++;
    }
  }
  cout << res << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
