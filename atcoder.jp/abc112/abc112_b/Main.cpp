#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, T;
    cin >> n >> T;
    int ans = 1000, count = 0;
    int c, t;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> t;
        if (t <= T)
        {
            ans = min(c, ans);
        }
        else
        {
            count++;
        }
    }
    if (count == n)
    {
        cout << "TLE" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
