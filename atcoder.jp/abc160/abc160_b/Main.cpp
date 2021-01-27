#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int ans = 0;
    while (1)
    {
        if (x == 0)
        {
            break;
        }
        if (x % 500 == 0)
        {
            x -= 500;
            ans += 1000;
        }
        else if (x % 5 == 0)
        {
            x -= 5;
            ans += 5;
        }
        else if (x % 100 == 0)
        {
            x -= 100;
        }
        else if (x % 50 == 0)
        {
            x -= 50;
        }
        else if (x % 10 == 0)
        {
            x -= 10;
        }
        else if (x % 1 == 0)
        {
            x -= 1;
        }
    }
    cout << ans << endl;
}
