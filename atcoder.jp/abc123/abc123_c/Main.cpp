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

vector<ll> fact, fact_inv, inv;

/*  init_nCk :二項係数のための前処理
    計算量:O(n)
*/
void init_nCk(int n) {
  fact.resize(n + 5);
  fact_inv.resize(n + 5);
  inv.resize(n + 5);
  fact[0] = fact[1] = 1;
  fact_inv[0] = fact_inv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < n + 5; i++) {
    fact[i] = fact[i - 1] * i % mod;
    inv[i] = mod - inv[mod % i] * (mod / i) % mod;
    fact_inv[i] = fact_inv[i - 1] * inv[i] % mod;
  }
}
/*  nCk :MODでの二項係数を求める(前処理 int_nCk が必要)
    計算量:O(1)
*/
ll mod_nCk(int n, int k) {
  assert(!(n < k));
  assert(!(n < 0 || k < 0));
  return fact[n] * (fact_inv[k] * fact_inv[n - k] % mod) % mod;
}
// 2^63未満のとき
ll nCk(int n, int k) {
  ll res = 1;
  for (int i = 0; i < k; ++i) {
    res *= (n - i);
    res /= (i + 1);
  }
  return res;
}

void solve() {
  ll n;
  cin >> n;
  vector<ll> vec(5);
  for (int i = 0; i < 5; ++i) {
    cin >> vec[i];
  }
  ll mi = *min_element(vec.begin(), vec.end());
  ll res = 4 + (n + mi - 1) / mi;
  cout << res << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
