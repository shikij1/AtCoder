#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

void solve() {
  string S;
  cin >> S;
  if (S == "WBWBWWBWBWBWWBWBWWBW") {
    cout << "Do" << endl;
  } else if (S == "WBWWBWBWBWWBWBWWBWBW") {
    cout << "Re" << endl;
  } else if (S == "WWBWBWBWWBWBWWBWBWBW") {
    cout << "Mi" << endl;
  } else if (S == "WBWBWBWWBWBWWBWBWBWW") {
    cout << "Fa" << endl;
  } else if (S == "WBWBWWBWBWWBWBWBWWBW") {
    cout << "So" << endl;
  } else if (S == "WBWWBWBWWBWBWBWWBWBW") {
    cout << "La" << endl;
  } else if (S == "WWBWBWWBWBWBWWBWBWWB") {
    cout << "Si" << endl;
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
