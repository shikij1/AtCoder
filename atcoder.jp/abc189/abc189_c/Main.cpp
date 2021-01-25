#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    int ans = 0;
    for (int l = 0; l < n; l++)
    {
        int mi = a.at(l);
        for (int r = l; r < n; r++)
        {
            if (mi > a.at(r))
            {
                mi = a.at(r);
            }
            if (ans < mi * (r - l + 1))
            {
                ans = mi * (r - l + 1);
            }
        }
    }
    cout << ans << endl;
}
