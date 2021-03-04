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
  int n;
  cin >> n;
  unordered_set<int> st;
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (1 <= a && a <= 399) {
      st.insert(1);
    } else if (400 <= a && a <= 799) {
      st.insert(2);
    } else if (800 <= a && a <= 1199) {
      st.insert(3);
    } else if (1200 <= a && a <= 1599) {
      st.insert(4);
    } else if (1600 <= a && a <= 1999) {
      st.insert(5);
    } else if (2000 <= a && a <= 2399) {
      st.insert(6);
    } else if (2400 <= a && a <= 2799) {
      st.insert(7);
    } else if (2800 <= a && a <= 3199) {
      st.insert(8);
    } else {
      ++sum;
    }
  }
  if (st.size() == 0) {
    cout << 1 << ' ' << min(8, sum) << '\n';
    return;
  }
  cout << st.size() << ' ' << st.size() + sum << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
