#include<algorithm>
#include<array>
#include<bitset>
#include<cassert>
#include<ciso646>
#include<cmath>
#include<complex>
#include<cstdio>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<random>
#include<set>
#include<stack>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>

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

// modint: mod 計算を int を扱うように扱える構造体
template<int MOD>
struct Fp {
  long long val;
  constexpr Fp(long long v = 0) noexcept: val(v % MOD) {
    if (val < 0) val += MOD;
  }
  constexpr int getmod() { return MOD; }
  constexpr Fp operator-() const noexcept {
    return val ? MOD - val : 0;
  }
  constexpr Fp operator+(const Fp &r) const noexcept { return Fp(*this) += r; }
  constexpr Fp operator-(const Fp &r) const noexcept { return Fp(*this) -= r; }
  constexpr Fp operator*(const Fp &r) const noexcept { return Fp(*this) *= r; }
  constexpr Fp operator/(const Fp &r) const noexcept { return Fp(*this) /= r; }
  constexpr Fp &operator+=(const Fp &r) noexcept {
    val += r.val;
    if (val >= MOD) val -= MOD;
    return *this;
  }
  constexpr Fp &operator-=(const Fp &r) noexcept {
    val -= r.val;
    if (val < 0) val += MOD;
    return *this;
  }
  constexpr Fp &operator*=(const Fp &r) noexcept {
    val = val * r.val % MOD;
    return *this;
  }
  constexpr Fp &operator/=(const Fp &r) noexcept {
    long long a = r.val, b = MOD, u = 1, v = 0;
    while (b) {
      long long t = a / b;
      a -= t * b;
      swap(a, b);
      u -= t * v;
      swap(u, v);
    }
    val = val * u % MOD;
    if (val < 0) val += MOD;
    return *this;
  }
  constexpr bool operator==(const Fp &r) const noexcept {
    return this->val == r.val;
  }
  constexpr bool operator!=(const Fp &r) const noexcept {
    return this->val != r.val;
  }
  friend constexpr ostream &operator<<(ostream &os, const Fp<MOD> &x) noexcept {
    return os << x.val;
  }
  friend constexpr Fp<MOD> modpow(const Fp<MOD> &a, long long n) noexcept {
    if (n == 0) return 1;
    auto t = modpow(a, n / 2);
    t = t * t;
    if (n & 1) t = t * a;
    return t;
  }
};

const int MOD = 1000000007;
using mint = Fp<MOD>;

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

ll gcd(ll x, ll y) { return (x % y) ? gcd(y, x % y) : y; }
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < q; ++i) {
    int l, r, t;
    cin >> l >> r >> t;
    --l;
    --r;
    for (int j = l; j <= r; ++j) {
      a[j] = t;
    }
  }
  for (auto e : a){
    cout << e << '\n';
  }

}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
