#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < (int)s.size(); i++)
    {
        s.at(i) = 'x';
    }
    cout << s << endl;
}
