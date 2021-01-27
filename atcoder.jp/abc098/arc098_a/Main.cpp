#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> w(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'W')
        {
            w.at(i + 1) = w.at(i) + 1;
        }
        else
        {
            w.at(i + 1) = w.at(i);
        }
    }
    int ans = 1e9, sum;
    for (int i = 0; i < n; i++)
    {

        sum = w.at(i) + n - (i + 1) - (w.at(n) - w.at(i + 1));
        ans = min(ans, sum);
    }
    cout << ans << endl;
}
