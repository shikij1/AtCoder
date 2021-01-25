#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long ans = 1;
    for (long long i = 1; i <= n; i++)
    {
        ans = (ans * i) % (long long)(1e9 + 7);
    }
    cout << ans << endl;
}
