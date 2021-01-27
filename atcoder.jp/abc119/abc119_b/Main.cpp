#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double ans = 0;
    cout << fixed << setprecision(15);
    for (int i = 0; i < n; i++)
    {
        double x;
        string u;
        cin >> x >> u;
        if (u == "JPY")
        {
            ans += x;
        }
        else
        {
            ans += 380000 * x;
        }
    }
    cout << ans << endl;
}
