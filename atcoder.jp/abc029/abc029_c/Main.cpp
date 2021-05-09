#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int N;
  cin >> N;
  vector<char> v = {'a', 'b', 'c'};
  for (auto e1 : v) {
    if (N == 1) {
      cout << e1;
      cout << '\n';
    }
    for (auto e2 : v) {
      if (N == 2) {
        cout << e1 << e2;
        cout << '\n';
      }
      for (auto e3 : v) {
        if (N == 3) {
          cout << e1 << e2 << e3;
          cout << '\n';
        }
        for (auto e4 : v) {
          if (N == 4) {
            cout << e1 << e2 << e3 << e4;
            cout << '\n';
          }
          for (auto e5 : v) {
            if (N == 5) {
              cout << e1 << e2 << e3 << e4 << e5;
              cout << '\n';
            }
            for (auto e6 : v) {
              if (N == 6) {
                cout << e1 << e2 << e3 << e4 << e5 << e6;
                cout << '\n';
              }
              for (auto e7 : v) {
                if (N == 7) {
                  cout << e1 << e2 << e3 << e4 << e5 << e6 << e7;
                  cout << '\n';
                }
                for (auto e8 : v) {
                  if (N == 8) {
                    cout << e1 << e2 << e3 << e4 << e5 << e6 << e7 << e8;
                    cout << '\n';
                  }
                }
              }
            }
          }
        }
      }
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
