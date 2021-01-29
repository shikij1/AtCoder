#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    int a, sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        sum += a;
    }

    for (int i = 0; i <= k; i++)
    {
        if (i >= ((m * n) - sum))
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
