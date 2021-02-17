#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0, i##_len=(n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len=(n); i <= i##_len; ++i)
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ma = 0;
    for (int i = 0; i < n; i++) {
        unordered_set<char> st1;
        unordered_set<char> st2;
        int cnt = 0;
        for (int j = 0; j < s.substr(0, i).size(); j++) {
            st1.insert(s.substr(0, i)[j]);
        }
        for (int j = 0; j < s.substr(i, n - i).size(); j++) {
            st2.insert(s.substr(i, n - i)[j]);
        }
        for(auto e: st2){
            if(st1.count(e)){
                cnt++;
            }
        }
        ma = max(cnt, ma);
    }
    cout << ma << '\n';
}


signed main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
