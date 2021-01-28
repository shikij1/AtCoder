#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, rs, a, ra, b, rb;
    cin >> s;
    int n = s.size();
    rs = string(s.rbegin(), s.rend());
    if (s != rs)
    {
        cout << "No" << endl;
        return 0;
    }
    a = s.substr(0, ((n - 1) / 2));
    ra = string(a.rbegin(), a.rend());
    if (a != ra)
    {
        cout << "No" << endl;
        return 0;
    }

    b = s.substr(((n + 3) / 2) - 1, ((n - 1) / 2));
    rb = string(b.rbegin(), b.rend());
    if (b != rb)
    {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
}
