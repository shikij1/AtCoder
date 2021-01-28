#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int i10 = i, i8 = i;
        bool flag = false;
        while (i10 > 0)
        {
            if (i10 % 10 == 7)
            {
                flag = true;
            }
            i10 /= 10;
        }
        while (i8 > 0)
        {
            if (i8 % 8 == 7)
            {
                flag = true;
            }
            i8 /= 8;
        }
        if (flag)
        {
            count++;
        }
    }
    cout << n - count << endl;
}
