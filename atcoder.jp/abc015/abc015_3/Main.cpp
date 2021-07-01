#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

int N, K;
int t[10][10];
bool dfs(int xorr, int depth) {
  //1. 再帰を抜ける条件
  if (depth == N) {
    return (xorr == 0);
  }

  //2. 全探索できるように再帰する
  for (int i = 0; i < K; i++) {
    if (dfs(xorr ^ t[depth][i], depth + 1))
      return true;
  }
  return false;
}


void solve() {
  cin >> N >> K;
//  vector<vector<int>> t(N, vector<int>(K));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < K; ++j) {
      cin >> t[i][j];
    }
  }
  if (dfs(0, 0)){
    cout << "Found" << '\n';
  }
  else{
    cout << "Nothing" << '\n';
  }

}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
