#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

long long stringtointeger(string s)
{
    long long num = 0;
    for (long long i = 0; i < (long long)s.size(); i++)
        num = num * 10 + (s.at(i) - '0');
    return num;
}

void solve()
{
    string s;
    cin >> s;
    long long n = (long long)s.size() - 1;
    long long ans = 0;
    for (long long bit = 0; bit < (1 << n); bit++)
    {
        long long sum = 0;
        string t;
        t += s[0];
        for (long long i = 0; i <= n; i++)
        {
            if (i == n)
            {
                sum += stringtointeger(t);
                // sum += stoi(t);
                break;
            }
            if (bit & 1 << i)
            {
                sum += stringtointeger(t);
                // sum += stoi(t);
                t = "";
            }
            t += s[i + 1];
        }
        ans += sum;
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
