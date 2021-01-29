#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += 1 / a;
    }
    cout << fixed << setprecision(15);
    cout << 1 / sum << endl;
}
