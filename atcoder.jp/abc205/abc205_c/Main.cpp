#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long a, b, c;
  cin >> a >> b >> c;
  if (a >= 0 && b >= 0) {
    if (a > b) {
      cout << '>' << '\n';
    } else if (a < b) {
      cout << '<' << '\n';
    } else {
      cout << '=' << '\n';
    }
  } else if (a >= 0 && b < 0) {
    if (abs(a) > abs(b)) {
      cout << '>' << '\n';
    } else if (abs(a) < abs(b)) {
      if (c % 2 == 0) {
        cout << '<' << '\n';
      } else {
        cout << '>' << '\n';
      }
    } else {
      if (c % 2 == 0) {
        cout << '=' << '\n';
      } else {
        cout << '>' << '\n';
      }
    }
  } else if (a < 0 && b >= 0) {
    if (abs(a) < abs(b)) {
      cout << '<' << '\n';
    } else if (abs(a) > abs(b)) {
      if (c % 2 == 0) {
        cout << '>' << '\n';
      } else {
        cout << '<' << '\n';
      }
    } else {
      if (c % 2 == 0) {
        cout << '=' << '\n';
      } else {
        cout << '<' << '\n';
      }
    }
  } else {
    if (a > b) {
      if (c % 2 == 0) {
        cout << '<' << '\n';
      } else {
        cout << '>' << '\n';
      }
    } else if (a < b) {
      if (c % 2 == 0) {
        cout << '>' << '\n';
      } else {
        cout << '<' << '\n';
      }
    } else {
      cout << '=' << '\n';
    }
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
