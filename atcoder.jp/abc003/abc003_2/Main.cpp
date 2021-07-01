#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  string s, t;
  cin >> s >> t;
  for (int i = 0; i < (int)s.size(); ++i) {
    if (s[i] != t[i]) {
      if (s[i] != '@' && t[i] != '@') {
        cout << "You will lose" << '\n';
        return;
      } else if (s[i] == '@' && t[i] != '@') {
        if (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r') {
        } else {
          cout << "You will lose" << '\n';
          return;
        }
      } else if (s[i] != '@' && t[i] == '@') {
        if (s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r') {
        } else {
          cout << "You will lose" << '\n';
          return;
        }
      }
    }
  }
  cout << "You can win" << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
