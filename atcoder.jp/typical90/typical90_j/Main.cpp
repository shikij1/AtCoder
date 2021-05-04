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
  vector<int> S(N + 1), T(N + 1);
  for (int i = 0; i < N; ++i) {
    int C, P;
    cin >> C >> P;
    if (C == 1) {
      S[i + 1] = S[i] + P;
      T[i + 1] = T[i];
    } else {
      T[i + 1] = T[i] + P;
      S[i + 1] = S[i];
    }
  }
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; ++i) {
    int L, R;
    cin >> L >> R;
    --L;
    cout << S[R] - S[L] << ' ' << T[R] - T[L] << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
