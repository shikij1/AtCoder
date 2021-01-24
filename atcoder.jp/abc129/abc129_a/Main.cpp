#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, q, r;
    cin >> p >> q >> r;
    cout << min({p + q, r + q, p + r, q + r, r + p, q + p}) << endl;
}
