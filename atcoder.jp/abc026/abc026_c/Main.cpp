#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;
using mint = modint1000000007;
// using mint = modint998244353;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }
const long long INF = 1000000000;
vector<int> G[25];/*G[b]には社員number:bの部下のnumberが格納されている
 */
int dfs(int u){
  int ma = 0;
  int mi = 10000000;
  if(G[u].size() == 0){/*節点uが葉の時、つまりuに部下がいない時、給料は1*/
    return 1;
  }
  for(auto v:G[u]){/*uの部下のvに対して最大の給料をmaに、
        最小の給料をmiに格納*/
    ma = max(ma,dfs(v));
    mi = min(mi,dfs(v));
  }
  return ma + mi +1;
}
void solve() {

  int n;
  cin >> n;
  for(int i = 2;i<=n;i++){
    int b;
    cin >> b;
    G[b].push_back(i);

  }
  cout << dfs(1) << endl;
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  solve();
  return 0;
}
