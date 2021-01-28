#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

ll f(ll a, ll b)
{
    ll count_a = 0, count_b = 0;
    if (a == 0 || b == 0)
    {
        return (count_a, count_b);
    }
    while (a > 0)
    {
        a /= 10;
        count_a++;
    }
    while (b > 0)
    {
        b /= 10;
        count_b++;
    }
    return max(count_a, count_b);
}

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> vec;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            vec.push_back(make_pair(i, n / i));
        }
    }
    ll ans = 1000000000000000;
    for (int i = 0; i < (int)vec.size(); i++)
    {
        ll a, b;
        tie(a, b) = vec.at(i);
        ans = min(f(a, b), ans);
    }
    cout << ans << endl;
}

signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
