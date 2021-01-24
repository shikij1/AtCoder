#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int i = a, sum = 0;
    while (1)
    {
        if (i > t)
        {
            break;
        }
        sum += b;
        i += a;
    }
    cout << sum << endl;
}
