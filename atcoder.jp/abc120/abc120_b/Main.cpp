#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k, count = 0;
    cin >> a >> b >> k;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            count++;
        }
        if (count == k)
        {
            cout << i << endl;
            break;
        }
    }
}
