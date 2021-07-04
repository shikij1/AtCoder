#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  long long N, K, A[1 << 18], B[1 << 18];
  vector<long long> vec;
  // Step #1. 入力など
  cin >> N >> K;
  for (int i = 1; i <= N; i++) {
    cin >> A[i] >> B[i];
    vec.push_back(B[i]);
    vec.push_back(A[i] - B[i]);
  }

  // Step #2. 答えを求める
  long long Answer = 0;
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());
  for (int i = 0; i < K; i++) Answer += vec[i];

  // Step #3. 出力
  cout << Answer << endl;
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
