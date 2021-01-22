#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int i = 0;
    while (1)
    {
        if (((a - 1) * i + 1) >= b)
            break;
        i++;
    }
    cout << i << endl;
}
