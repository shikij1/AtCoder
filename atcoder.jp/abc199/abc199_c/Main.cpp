#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int N;
  string S;
  int Q;
  cin >> N >> S >> Q;
  bool rev = false;
  string s = S.substr(0, N), t = S.substr(N, N);
  for (int i = 0; i < Q; ++i) {
    int T, A, B;
    cin >> T >> A >> B;
    --A;
    --B;
    if (T == 1) {
      if (A < N && B < N) {
        swap(s[B], s[A]);
      } else if (A < N && N <= B) {
        B -= N;
        swap(s[A], t[B]);
      } else {
        A -= N;
        B -= N;
        swap(t[A], t[B]);
      }
    } else {
      swap(s, t);
    }
  }
  cout << s + t << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
