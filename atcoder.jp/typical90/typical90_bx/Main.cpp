#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

long long N, A[1 << 19];
long long B[1 << 19];
void solve() {
  // Step #1. Input
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];

  // Step #2. Make Array B
  for (int i = 1; i <= N; i++) B[i] = B[i - 1] + A[i];
  for (int i = 1; i <= N; i++) B[i + N] = B[i + N - 1] + A[i];
  if (B[N] % 10LL != 0LL) {
    cout << "No" << endl;
    return;
  }

  // Step #3. Get Answer
  for (int i = 0; i <= N; i++) {
    long long goal = B[i] + B[N] / 10LL;
    int pos1 = lower_bound(B, B + 2 * N + 1, goal) - B;
    if (B[pos1] == goal) {
      cout << "Yes" << endl;
      return;
    }
  }
  cout << "No" << endl;


}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
