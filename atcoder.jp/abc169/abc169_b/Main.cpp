#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long mx = 1e18;
    long long ans = 1, a;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        if (flag || mx < __int128(ans) * a)
        {
            flag = true;
        }
        ans *= a;
    }
    cout << (flag ? -1 : ans) << endl;
}
