#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    string s;
    cin >> a >> b >> s;
    if (a + b + 1 != (int)s.size())
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (i == a)
        {
            if (s.at(a) != '-')
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else
        {
            if (0 <= (s.at(i) - '0') && (s.at(i) - '0') <= 9)
            {
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
