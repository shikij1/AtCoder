#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (((n + 111 - 1) / 111) == 10)
    {
        cout << 1111 << endl;
    }
    else
    {
        cout << 111 * ((n + 111 - 1) / 111) << endl;
    }
}
