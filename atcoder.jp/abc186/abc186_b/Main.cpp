#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    int mi = 100;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a.at(i).at(j);
            mi = min(mi, a.at(i).at(j));
        }
    }
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            ans += a.at(i).at(j) - mi;
        }
    }
    cout << ans << endl;
}
