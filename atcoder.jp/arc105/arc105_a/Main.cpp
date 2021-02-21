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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  for (int bit = 1; bit < (1 << 4); ++bit) {
    int take = 0, left = 0;
    for (int i = 0; i < 4; ++i) {
      if (bit & (1 << i)) {
        if (i == 0) {
          take += a;
        }
        if (i == 1) {
          take += b;
        }
        if (i == 2) {
          take += c;
        }
        if (i == 3) {
          take += d;
        }

      } else {
        if (i == 0) {
          left += a;
        }
        if (i == 1) {
          left += b;
        }
        if (i == 2) {
          left += c;
        }
        if (i == 3) {
          left += d;
        }
      }
    }
    if (take == left) {
      cout << "Yes" << '\n';
      return;
    }
  }
  cout << "No" << '\n';

}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
