#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool flag = false;
    int i = 0;
    while (1)
    {
        if (i % 2 == 0)
        {
            c -= b;
            if (c <= 0)
            {
                flag = true;
                break;
            }
        }
        else
        {
            a -= d;
            if (a <= 0)
                break;
        }
        i++;
    }
    cout << (flag ? "Yes" : "No") << endl;
}
