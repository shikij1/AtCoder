#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, ans;
    cin >> a >> b >> c >> d;
    cout << max({a * c, a * d, b * c, b * d}) << endl;
}
