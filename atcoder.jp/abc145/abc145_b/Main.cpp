#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, half;
    string s;
    cin >> n >> s;
    half = n / 2;
    if (n % 2 == 1)
    {
        cout << "No" << endl;
    }
    else
    {
        if (s.substr(0, half) == s.substr(half))
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "No" << endl;
        }
    }
}
