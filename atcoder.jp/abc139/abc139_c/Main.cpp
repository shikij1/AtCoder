#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, ans = 0, count = 0, prev;
    cin >> n >> prev;
    for (int i = 1; i < n; i++)
    {
        cin >> h;
        if (prev >= h)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        ans = max(ans, count);
        prev = h;
    }
    cout << ans << endl;
}
