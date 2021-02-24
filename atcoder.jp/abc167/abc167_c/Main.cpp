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
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> c(n);
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; ++i) {
    cin >> c[i];
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }
  int res = 1e8;
  for (int bit = 0; bit < (1 << n); ++bit) {
    int sum = 0;
    vector<int> u(m);
    for (int i = 0; i < n; ++i) {
      if (bit & 1 << i) {
        sum += c[i];
        for (int j = 0; j < m; ++j) {
          u[j] += a[i][j];
        }
      }
    }
    bool flag = false;
    for (int i = 0; i < m; ++i) {
      if (u[i] < x) {
        flag = true;
      }
    }
    if (flag) {
      continue;
    }
    res = min(res, sum);
  }
  if (res == 1e8) {
    cout << -1 << '\n';
  } else {
    cout << res << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
