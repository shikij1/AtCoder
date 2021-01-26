#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve()
{
    int a, b, x;
    cin >> x >> a >> b;
    if (a - b >= 0)
    {
        cout << "delicious" << '\n';
    }
    else
    {
        if (b - a >= x + 1)
        {
            cout << "dangerous" << '\n';
        }
        else
        {
            cout << "safe" << '\n';
        }
    }
}

signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
