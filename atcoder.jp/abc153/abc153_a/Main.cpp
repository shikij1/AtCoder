#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, a, count = 0;
    cin >> h >> a;
    while (true)
    {
        h -= a;
        count++;
        if (h <= 0)
            break;
    }
    cout << count << endl;
}
