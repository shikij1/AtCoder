#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b.at(i);
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> c.at(i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (a.at(i) - 1 == a.at(i - 1))
            {
                ans += b.at(a.at(i) - 1) + c.at(a.at(i) - 2);
            }
            else
            {
                ans += b.at(a.at(i) - 1);
            }
        }
        else
        {
            ans += b.at(a.at(i) - 1);
        }
    }
    cout << ans << endl;
}
