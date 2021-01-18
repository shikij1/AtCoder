#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int res = 0;

    if (S.at(0) == 'R' && S.at(1) == 'R' && S.at(2) == 'R')
    {
        res += 3;
    }
    else if (S.at(0) == 'R' && S.at(1) == 'R')
    {
        res += 2;
    }
    else if (S.at(1) == 'R' && S.at(2) == 'R')
    {
        res += 2;
    }
    else if ((S.at(0) == 'R' || S.at(1) == 'R' || S.at(2) == 'R'))
    {
        res += 1;
    }

    cout << res << endl;
}
