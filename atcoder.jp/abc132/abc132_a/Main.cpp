#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> S;
    for (int i = 0; i < 4; i++)
    {
        S.insert(s.at(i));
    }
    if (S.size() == 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
