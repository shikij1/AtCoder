#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int sum = 0;
    if (a <= k)
    {
        sum += a;
        k -= a;
    }
    else
    {
        sum += k;
        cout << sum << endl;
        return 0;
    }

    if (b <= k)
    {
        k -= b;
    }
    else
    {
        cout << sum << endl;
        return 0;
    }

    sum -= k;
    cout << sum << endl;
}
