#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int mm = (s.at(5) - '0') * 10 + (s.at(6) - '0');
    if (mm <= 4)
    {
        cout << "Heisei" << endl;
    }
    else
    {
        cout << "TBD" << endl;
    }
}
