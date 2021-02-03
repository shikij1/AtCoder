#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const double pi = acos(-1.0);
const ll mod = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

void solve() {
    string s, t;
    cin >> s >> t;
    int ans = 1000;
    for (int i = 0; i < sz(s) - sz(t) + 1; i++) {
        string sub = s.substr(i, sz(t));
        int count = 0;
        for (int j = 0; j < sz(sub); j++) {
            if (sub[j] == t[j]) {
                count++;
            }
        }
        ans = min(sz(t) - count, ans);
    }
    cout << ans << endl;
}

signed main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
