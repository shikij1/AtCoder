#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    vector<long long> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x.at(i) >> y.at(i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (d >= sqrt(x.at(i) * x.at(i) + y.at(i) * y.at(i)))
        {
            ans++;
        }
    }
    cout << ans << endl;
}
