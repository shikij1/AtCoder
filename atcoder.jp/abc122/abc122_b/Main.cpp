#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, acgt = "ACGT";
    cin >> s;
    int now = 0, ans = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        bool flag = false;
        for (int j = 0; j < (int)acgt.size(); j++)
        {
            if (s.at(i) == acgt.at(j))
            {
                flag = true;
            }
        }
        if (flag)
        {
            now++;
            ans = max(now, ans);
        }
        else
        {
            now = 0;
        }
    }
    cout << ans << endl;
}
