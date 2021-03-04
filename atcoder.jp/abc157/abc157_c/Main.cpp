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

void solve() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> p(m);
  for (int i = 0; i < m; ++i) {
    cin >> p[i].first >> p[i].second;
  }
  for (int i = 0; i < 1000; ++i) {
    int ni = i / 10;
    vector<int> d(1, i % 10);
    while (ni) {
      d.push_back(ni % 10);
      ni /= 10;
    }
    if (d.size() != n) {
      continue;
    }
    reverse(d.begin(), d.end());
    bool ok = true;
    for (int j = 0; j < m; ++j) {
      if (d[p[j].first - 1] != p[j].second){
        ok = false;
      }
    }
    if (ok) {
      cout << i << endl;
      return;
    }
  }
  cout << -1 << endl;
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
