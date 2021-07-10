#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }
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

const int mod = 1000000007;
using mint = Fp<mod>;

vector<long long> fact, fact_inv, inv;

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
long long mod_nCk(int n, int k) {
  assert(!(n < k));
  assert(!(n < 0 || k < 0));
  return fact[n] * (fact_inv[k] * fact_inv[n - k] % mod) % mod;
}
// 2^63未満のとき
long long nCk(int n, int k) {
  long long res = 1;
  for (int i = 0; i < k; ++i) {
    res *= (n - i);
    res /= (i + 1);
  }
  return res;
}
void solve() {
  int n;
  cin >> n;
  vector<int> c(n);
  for (int i = 0; i < n; ++i) {
    cin >>c[i];
  }
  sort(c.begin(), c.end());
  mint ans = 1;
  for (int i = 0; i < n; ++i) {
    ans *= max(0, c[i]-i);
  }
  cout << ans.val << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
