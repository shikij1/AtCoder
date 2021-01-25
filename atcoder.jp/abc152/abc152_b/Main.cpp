#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mi, ma;
    mi = min(a, b);
    ma = max(a, b);
    for (int i = 0; i < ma; i++)
    {
        cout << mi;
    }
    cout << '\n';
}
