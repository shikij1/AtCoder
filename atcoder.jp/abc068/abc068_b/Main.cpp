#include <bits/stdc++.h>
using namespace std;
int N;
int main()
{
    cin >> N;
    if (N >= 64)
    {
        cout << 64 << endl;
    }
    else if (N >= 32)
    {
        cout << 32 << endl;
    }
    else if (N >= 16)
    {
        cout << 16 << endl;
    }
    else if (N >= 8)
    {
        cout << 8 << endl;
    }
    else if (N >= 4)
    {
        cout << 4 << endl;
    }
    else if (N >= 2)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}
