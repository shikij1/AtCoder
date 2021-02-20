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
  int h, w;
  cin >> h >> w;
  vector<vector<char>> field(h + 2, vector<char>(w + 2, '.'));
  vector<vector<int>> res(h + 2, vector<int>(w + 2));
  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      cin >> field[i][j];
    }
  }
  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      if (field[i][j] == '#') {
        res[i][j] = -1;
        continue;
      }
      if (field[i + 1][j + 1] == '#') {
        res[i][j]++;
      }
      if (field[i][j + 1] == '#') {
        res[i][j]++;
      }
      if (field[i - 1][j + 1] == '#') {
        res[i][j]++;
      }
      if (field[i - 1][j] == '#') {
        res[i][j]++;
      }
      if (field[i - 1][j - 1] == '#') {
        res[i][j]++;
      }
      if (field[i][j - 1] == '#') {
        res[i][j]++;
      }
      if (field[i + 1][j - 1] == '#') {
        res[i][j]++;
      }
      if (field[i + 1][j] == '#') {
        res[i][j]++;
      }
    }
  }

  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      if (res[i][j] == -1) {
        cout << '#';
      } else {
        cout << res[i][j];
      }
    }
    cout << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
