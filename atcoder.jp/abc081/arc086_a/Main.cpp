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
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1);
  set<int> st;
  for (int i = 0; i < n; ++i) {
    int e;
    cin >> e;
    st.insert(e);
    a[e]++;
  }
  sort(a.begin(), a.end());
  int tmp;
  for (int i = 0; i < n + 1; ++i) {
    if (a[i] == 0){
      continue;
    }
    tmp = i;
    break;
  }
  if ((int)st.size() - k <= 0) {
    cout << 0 << '\n';
  } else {
    int ans = 0;
    for (int i = 0; i < (int)st.size() - k; ++i) {
      ans += a[tmp];
      tmp++;
    }
    cout << ans << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
