#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sz = s.size();

    for (int i = 0; i < 1 << (sz - 1); i++)
    {
        int sum = s.at(0) - '0';
        for (int j = 0; j < sz - 1; j++)
        {
            if (i & 1 << j)
            {
                sum += s.at(sz - 1 - j) - '0';
            }
            else
            {
                sum -= s.at(sz - 1 - j) - '0';
            }
        }
        if (sum == 7)
        {
            for (int j = 0; j < sz; j++)
            {
                cout << s.at(j);
                if (sz - 1 == j)
                {
                    break;
                }
                if (i & 100 >> j)
                {
                    cout << "+";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << "=7" << endl;
            return 0;
        }
    }
}
