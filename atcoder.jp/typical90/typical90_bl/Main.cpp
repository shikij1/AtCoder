#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

long long N, A[1 << 18], B[1 << 18];
long long Q, L[1 << 18], R[1 << 18], V[1 << 18];

void solve() {
  // Step #1. 入力
  cin >> N >> Q;
  for (int i = 1; i <= N; i++) cin >> A[i];
  for (int i = 1; i <= Q; i++) cin >> L[i] >> R[i] >> V[i];

  // Step #2. 最初の答え
  long long Answer = 0;
  for (int i = 1; i <= N - 1; i++) {
    B[i] = A[i + 1] - A[i];
    Answer += abs(B[i]);
  }

  // Step #3. シミュレーション
  for (int i = 1; i <= Q; i++) {
    long long mae = abs(B[L[i] - 1]) + abs(B[R[i]]);
    if (L[i] >= 2) B[L[i] - 1] += V[i];
    if (R[i] <= N - 1) B[R[i]] -= V[i];
    long long ato = abs(B[L[i] - 1]) + abs(B[R[i]]);
    Answer += (ato - mae);
    cout << Answer << endl;
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
