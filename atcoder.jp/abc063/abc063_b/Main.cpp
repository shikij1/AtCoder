#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> se;
    for (int i = 0; i < (int)s.size(); i++)
    {
        se.insert(s.at(i));
    }
    cout << ((int)s.size() == (int)se.size() ? "yes" : "no") << endl;
}
