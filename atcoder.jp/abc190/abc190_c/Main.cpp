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
    int n, m, a, b, c, d;
    cin >> n >> m;
    vector<pair<int, int>> con(m);
    int k;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        con[i] = make_pair(a, b);
    }
    cin >> k;

    vector<pair<int, int>> sel(k);
    for (int i = 0; i < k; i++) {
        cin >> c >> d;
        sel[i] = make_pair(c, d);
    }
    int ans = 0;
    for (int bit = 0; bit < (1 << k); bit++) {
        set<int> st;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            if (bit & (1 << i)) {
                st.insert(sel[i].first);
            } else {
                st.insert(sel[i].second);
            }
        }
        for (auto co : con) {
            int c, d;
            tie(c, d) = co;
            if (st.count(c) && st.count(d)) {
                sum++;
            }
        }
        ans = max(sum, ans);
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
