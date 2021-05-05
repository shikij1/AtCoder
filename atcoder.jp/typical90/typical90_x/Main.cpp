#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  for (int i = 0; i < N; ++i) {
    cin >> B[i];
  }
  long long sum = 0;
  for (int i = 0; i < N; ++i) {
    sum += abs(A[i] - B[i]);
  }
  if (sum <= K) {
    if (sum % 2 == 0 && K % 2 == 0) {
      cout << "Yes" << '\n';
    } else if (sum % 2 == 1 && K % 2 == 1) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  } else {
    cout << "No" << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
