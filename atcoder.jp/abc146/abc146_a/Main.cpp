#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a;
    if (s == "SUN")
        a = 0;
    else if (s == "SAT")
        a = 6;
    else if (s == "FRI")
        a = 5;
    else if (s == "THU")
        a = 4;
    else if (s == "WED")
        a = 3;
    else if (s == "TUE")
        a = 2;
    else if (s == "MON")
        a = 1;
    cout << 7 - a << endl;
}
