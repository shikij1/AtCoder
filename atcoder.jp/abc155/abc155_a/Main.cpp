#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == b) && a != c)
        cout << "Yes" << endl;
    else if (b != a && (a == c))
        cout << "Yes" << endl;
    else if ((b == c) && b != a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
