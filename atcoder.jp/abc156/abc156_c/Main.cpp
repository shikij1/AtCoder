#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    int ma = 1, mi = 100;
    for (int i = 0; i < n; i++)
    {
        cin >> x.at(i);
        ma = max(x.at(i), ma);
        mi = min(x.at(i), mi);
    }
    int ans = 100000000;
    for (int p = mi; p <= ma; p++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (x.at(i) - p) * (x.at(i) - p);
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;
}
