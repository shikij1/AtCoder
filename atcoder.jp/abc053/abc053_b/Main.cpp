#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a_index, z_index;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s.at(i) == 'A')
        {
            a_index = i;
            break;
        }
    }
    for (int i = (int)s.size() - 1; i >= 0; i--)
    {
        if (s.at(i) == 'Z')
        {
            z_index = i;
            break;
        }
    }
    cout << z_index - a_index + 1 << endl;
}
