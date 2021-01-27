#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ans = 1e8;
    for (int i = 0; i < (int)s.size() - 2; i++)
    {
        ans = min(abs(stoi(s.substr(i, 3)) - 753), ans);
    }
    cout << ans << endl;
}
