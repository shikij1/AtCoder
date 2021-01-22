#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ma;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    ma = *max_element(a.begin(), a.end());
    int ans, gcd_d, ma_d = 0;
    ans = ma;
    for (int k = ma; k >= 2; k--)
    {
        gcd_d = 0;
        for (int i = 0; i < n; i++)
        {
            if (a.at(i) % k == 0)
            {
                gcd_d++;
            }
        }
        if (ma_d < gcd_d)
        {
            ma_d = gcd_d;
            ans = k;
        }
    }
    cout << ans << endl;
}
