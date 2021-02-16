#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> s(n), cp(m);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        s[i] = make_pair(a, b);
    }
    for (int i = 0; i < m; i++) {
        int c, d;
        cin >> c >> d;
        cp[i] = make_pair(c, d);
    }
    vector<int> sp(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        tie(a, b) = s[i];
        int mi = 1e9;
        for (int j = 0; j < m; j++) {
            int c, d;
            tie(c, d) = cp[j];
            int dis = abs(a - c) + abs(b - d);
            if (mi > dis) {
                mi = dis;
                sp[i] = j + 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << sp[i] << '\n';
    }
}

signed main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
