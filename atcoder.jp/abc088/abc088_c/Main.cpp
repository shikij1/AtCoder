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
  vector<vector<int>> c(3, vector<int>(3));
  vector<int> a(3), b(3);
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cin >> c[i][j];
    }
  }
  b[0] = c[0][0];
  b[1] = c[0][1];
  b[2] = c[0][2];
  a[0] = 0;
  a[1] = c[1][0] - b[0];
  a[2] = c[2][0] - b[0];
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      if(a[i] + b[j] != c[i][j]){
        cout << "No" << '\n';
        return;
      }
    }
  }
  cout << "Yes" << '\n';


}

signed main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
