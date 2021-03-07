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
  ll n, m, q;
  cin >> n >> m >> q;
  vector<tuple<ll, ll, ll, ll>> vec(q);
  for (ll i = 0; i < q; ++i) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    vec[i] = make_tuple(a, b, c, d);
  }
  ll res = 0;
  for (ll i0 = 1; i0 <= 10; ++i0) {
    for (ll i1 = i0; i1 <= 10; ++i1) {
      for (ll i2 = i1; i2 <= m; ++i2) {
        for (ll i3 = i2; i3 <= m; ++i3) {
          for (ll i4 = i3; i4 <= m; ++i4) {
            for (ll i5 = i4; i5 <= m; ++i5) {
              for (ll i6 = i5; i6 <= m; ++i6) {
                for (ll i7 = i6; i7 <= m; ++i7) {
                  for (ll i8 = i7; i8 <= m; ++i8) {
                    for (ll i9 = i8; i9 <= m; ++i9) {
                      vector<ll> A = {i0, i1, i2, i3, i4, i5, i6, i7, i8, i9};
                      ll sum = 0;
                      for (ll i = 0; i < q; ++i) {
                        ll a, b, c, d;
                        tie(a, b, c, d) = vec[i];
                        --a;
                        --b;
                        if ((A[b] - A[a]) == c) {
                          sum += d;
                        }
                      }
                      res = max(res, sum);
                    }
                  }
                }
              }
            }
          }
        }
      }
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
