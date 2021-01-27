#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, ans = 1;
    cin >> n >> k;
    for (int i = 0; i < n - 1; i++)
    {
        ans *= (k - 1);
    }
    ans = k * ans;
    cout << ans << endl;
}
