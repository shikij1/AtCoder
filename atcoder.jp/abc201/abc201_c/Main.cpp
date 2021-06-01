#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  string s;
  cin >> s;
  vector<string> must, want, no;
  for (int i = 0; i < (int)s.size(); ++i) {
    if (s[i] == 'o') {
      must.push_back(to_string(i));
    } else if (s[i] == 'x') {
      no.push_back(to_string(i));
    } else {
      want.push_back(to_string(i));
    }
  }
  int ans = 0;
  for (int i = 0; i <= 9; ++i) {
    for (int j = 0; j <= 9; ++j) {
      for (int k = 0; k <= 9; ++k) {
        for (int l = 0; l <= 9; ++l) {
          string t = to_string(i) + to_string(j) + to_string(k) + to_string(l);
          bool flag = false;
          for (auto e : must) {
            if (t.find(e) == std::string::npos) {
              flag = true;
            }
          }
          if (flag) {
            continue;
          }
          for (auto e : no) {
            if (t.find(e) != std::string::npos) {
              flag = true;
            }
          }
          if (flag) {
            continue;
          }
          ans++;
        }
      }
    }
  }
  cout << ans << '\n';
  
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
