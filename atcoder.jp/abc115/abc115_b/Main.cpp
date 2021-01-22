#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p.at(i);
    }
    int ma = *max_element(p.begin(), p.end());
    int ans = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (p.at(i) == ma && flag)
        {
            ans += p.at(i) / 2;
            flag = false;
        }
        else
        {
            ans += p.at(i);
        }
    }
    cout << ans << endl;
}
