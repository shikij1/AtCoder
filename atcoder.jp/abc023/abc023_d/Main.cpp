//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const long long INF = 1LL << 60; // 十分大きい値を 1 つ決める
//
//int main() {
//  // 入力
//  int N;
//  cin >> N;
//  vector<long long> h(N), s(N);
//  for (int i = 0; i < N; i++) cin >> h[i] >> s[i];
//
//  // 二分探索
//  long long left = 0, right = INF;
//  while (right - left > 1) {
//    long long mid = (left + right) / 2;
//
//    // 判定
//    bool ok = true;
//    vector<long long> t(N, 0); // 各風船を割るまでの制限時間
//    for (int i = 0; i < N; ++i) {
//      // そもそも mid が初期高度より低かったらfalse
//      if (mid < h[i]) ok = false;
//      else t[i] = (mid - h[i]) / s[i];
//    }
//    // 時間制限がさし迫っている順にソート
//    sort(t.begin(), t.end());
//    for (int i = 0; i < N; ++i) {
//      if (t[i] < i) ok = false; // 時間切れ発生
//    }
//
//    if (ok) right = mid;
//    else left = mid;
//  }
//
//  cout << right << endl;
//}

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

#define int long long

int n;
bool is_ok(int index, vector<long long> h, vector<long long> s) {
  bool ok = true;
  vector<long long> t(n, 0); // 各風船を割るまでの制限時間
  for (int i = 0; i < n; ++i) {
    // そもそも mid が初期高度より低かったらfalse
    if (index < h[i]) ok = false;
    else t[i] = (index - h[i]) / s[i];
  }
  // 時間制限がさし迫っている順にソート
  sort(t.begin(), t.end());
  for (int i = 0; i < n; ++i) {
    if (t[i] < i) ok = false; // 時間切れ発生
  }
  return ok;
}

// めぐる式二分探索
int binary_search(vector<long long> h, vector<long long> s) {
  // okは条件を満たすことが確定したゾーン、ngは満たさないことが確定したゾーン
  int ng = 0;
  int ok = 1e18;

  /* ok と ng のどちらが大きいかわからないことを考慮 */
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;

    if (is_ok(mid, h, s)) ok = mid;
    else ng = mid;
  }
  return ok;
}

void solve() {
  cin >> n;
  vector<long long> h(n), s(n);
  for (int i = 0; i < n; ++i) {
    cin >> h[i];
    cin >> s[i];
  }
  int ans = binary_search(h, s);
  cout << ans << '\n';
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
