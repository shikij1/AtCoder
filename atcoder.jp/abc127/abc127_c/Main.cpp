#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int prev_l, prev_r, l, r;
    cin >> prev_l >> prev_r;
    for (int i = 0; i < m - 1; i++)
    {
        cin >> l >> r;
        if (max(prev_l, l) > min(prev_r, r))
        {
            cout << 0 << endl;
            return 0;
        }
        else
        {
            prev_l = max(prev_l, l);
            prev_r = min(prev_r, r);
        }
    }
    if (prev_r < n)
    {
        cout << prev_r - prev_l + 1 << endl;
    }
    else if (prev_l <= n && n >= prev_r)
    {
        cout << n - prev_l + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
