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

ll mod_pow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

void solve() {
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "EQUAL" << '\n';
        return;
    }
    if ((int)a.size() > (int)b.size()) {
        cout << "GREATER" << '\n';
        return;
    }
    if ((int)a.size() < (int)b.size()) {
        cout << "LESS" << '\n';
        return;
    }
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] - '0' > b[i] - '0') {
            cout << "GREATER" << '\n';
            return;
        } else if (a[i] - '0' < b[i] - '0') {
            cout << "LESS" << '\n';
            return;
        }
    }
    cout << "EQUAL" << '\n';
}

signed main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
