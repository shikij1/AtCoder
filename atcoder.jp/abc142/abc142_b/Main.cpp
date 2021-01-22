#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h.at(i);
        if (h.at(i) >= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
