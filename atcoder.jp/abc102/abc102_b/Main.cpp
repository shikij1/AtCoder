#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    int ma = 0, mi = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ma = max(ma, a);
        mi = min(mi, a);
    }
    cout << ma - mi << endl;
}
