#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    long long ans = 1000000000000000000;
    long long now;
    for (long long i = 0; i <= (long long)1e5; i++)
    {
        now = 2 * c * i + a * max(x - i, (long long)0) + b * max(y - i, (long long)0);
        ans = min(now, ans);
    }
    cout << ans << endl;
}
