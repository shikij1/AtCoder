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

void solve() {
  long long n, k;
  cin >> n >> k;
  vector<long long> c(n);
  for (long long i = 0; i < n; ++i) {
    cin >> c[i];
  }

  vector<long long> v;
  set<long long> st;
  map<long long, long long> mp;
  long long prev = 0;
  long long ma = -1;
  for (int i = 0; i < n; ++i) {
    if (i >= k) {
      prev = c[i - k];
    }
    mp[prev]--;
    mp[c[i]]++;
    if (mp[prev]<1){
      st.erase(prev);
    }
    st.insert(c[i]);
    ma = max(ma, (long long)st.size());
  }
  cout << ma << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
