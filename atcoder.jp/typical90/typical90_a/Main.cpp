#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

long long N, K, L;
long long A[1 << 18];

bool solve(long long M) {
  long long cnt = 0, pre = 0;
  for (int i = 1; i <= N; i++) {
    if (A[i] - pre >= M && L - A[i] >= M) {
      cnt += 1;
      pre = A[i];
    }
  }
  if (cnt >= K) return true;
  return false;
}

void solve() {

  cin >> N >> L;
  cin >> K;
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }

  long long left = 0;
  long long right = L + 1;
  while (right - left > 1) {
    long long mid = left + (right - left) / 2;
    if (solve(mid) == false) right = mid;
    else left = mid;
  }
  cout << left << endl;
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
