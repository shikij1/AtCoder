#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
        sum += a.at(i);
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for (int i = 0; i < m; i++)
    {
        if (a.at(i) * (4 * m) < sum)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
