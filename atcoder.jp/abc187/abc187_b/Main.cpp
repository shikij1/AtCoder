#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        p.at(i) = make_pair(x, y);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x1, y1, x2, y2;
            tie(x1, y1) = p.at(i);
            tie(x2, y2) = p.at(j);

            if (x2 - x1 > 0)
            {
                if (x1 - x2 <= y2 - y1 && y2 - y1 <= x2 - x1)
                {
                    ans++;
                }
            }
            else
            {
                if (x1 - x2 >= y2 - y1 && y2 - y1 >= x2 - x1)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
