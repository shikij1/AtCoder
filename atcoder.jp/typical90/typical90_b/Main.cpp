#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

bool hantei(string S) {
  int dep = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '(') dep += 1;
    if (S[i] == ')') dep -= 1;
    if (dep < 0) return false;
  }
  if (dep == 0) return true;
  return false;
}

void solve() {
  int N;
  cin >> N;
  for (int i = 0; i < (1 << N); i++) {
    string Candidate = "";
    for (int j = N - 1; j >= 0; j--) {
      if ((i & (1 << j)) == 0) {
        Candidate += "(";
      }
      else {
        Candidate += ")";
      }
    }
    bool I = hantei(Candidate);
    if (I == true) cout << Candidate << endl;
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
