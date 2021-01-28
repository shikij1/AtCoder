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
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    for (int i = 0; i < k; i++)
    {
        int ma = vec.at(0), index = 0;
        for (int j = 0; j < (int)vec.size(); j++)
        {
            if (vec.at(j) > ma)
            {
                ma = vec.at(j);
                index = j;
            }
        }
        vec.at(index) = ma * 2;
    }
    int sum = 0;
    for (int j = 0; j < (int)vec.size(); j++)
    {
        sum += vec.at(j);
    }
    cout << sum << endl;
}

signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
