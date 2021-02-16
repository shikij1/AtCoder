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
const int mod = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

void solve() {
    string s;
    cin >> s;
    if (s.front() != 'A') {
        cout << "WA" << '\n';
        return;
    }
    int cnt = 0;
    for (int i = 2; i < (int)s.size() - 1; i++) {
        if (s[i] == 'C') {
            cnt++;
        }
    }
    if (cnt != 1) {
        cout << "WA" << '\n';
        return;
    }
    for (int i = 0; i < (int)s.size(); i++) {
        if (((int)s[i] < 97 || (int)s[i] > 122) &&
            (s[i] != 'C' && s[i] != 'A')) {
            cout << "WA" << '\n';
            return;
        }
    }
    cout << "AC" << '\n';
}

signed main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
