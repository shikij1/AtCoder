#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int count1 = 0, count2 = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] - '0' == 0 && i % 2 == 0)
        {
            count1++;
        }
        else if (s[i] - '0' == 1 && i % 2 == 1)
        {
            count1++;
        }

        if (s[i] - '0' == 1 && i % 2 == 0)
        {
            count2++;
        }
        else if (s[i] - '0' == 0 && i % 2 == 1)
        {
            count2++;
        }
    }
    cout << min(count1, count2) << endl;
}
