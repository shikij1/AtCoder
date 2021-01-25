#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, sum = 100, ans = 0, i = 0;
    cin >> x;
    while (1)
    {
        i++;
        sum += sum / 100;
        if (sum >= x)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
