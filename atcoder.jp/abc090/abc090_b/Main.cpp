#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        string s = to_string(i), t = to_string(i);
        reverse(t.begin(), t.end());
        if (s == t)
            ans++;
    }
    cout << ans << endl;
}
