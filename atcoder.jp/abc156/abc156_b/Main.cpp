#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    while (0 < n)
    {
        n = n / k;
        ans++;
    }
    cout << ans << endl;
}
