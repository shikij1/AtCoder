#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long ans = 0, a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ans += (b - a + 1) * (2 * a + (b - a)) / 2;
    }
    cout << ans << endl;
}
