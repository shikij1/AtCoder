#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n), ary(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x.at(i) >> y.at(i);
        ary.at(i) = i;
    }
    double sum = 0;
    do
    {
        for (int i = 0; i < n - 1; i++)
        {
            sum += sqrt((x[ary[i]] - x[ary[i + 1]]) * (x[ary[i]] - x[ary[i + 1]]) + (y[ary[i]] - y[ary[i + 1]]) * (y[ary[i]] - y[ary[i + 1]]));
        }

    } while (next_permutation(ary.begin(), ary.end()));

    int com = 1;
    for (int i = 1; i <= n; ++i)
    {
        com = com * i;
    }

    cout << fixed << setprecision(15);
    cout << sum / com << endl;
}
