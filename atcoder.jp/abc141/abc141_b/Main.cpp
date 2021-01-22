#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < (int)s.size(); i++)
    {
        // 奇数
        if (i % 2 == 0)
        {
            if (s.at(i) != 'R' && s.at(i) != 'U' && s.at(i) != 'D')
                flag = true;
        }
        else
        {
            if (s.at(i) != 'L' && s.at(i) != 'U' && s.at(i) != 'D')
                flag = true;
        }
    }
    cout << (flag ? "No" : "Yes") << endl;
}
