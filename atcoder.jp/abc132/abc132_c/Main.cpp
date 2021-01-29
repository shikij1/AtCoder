#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    set<int> k;
    sort(d.begin(), d.end());
    int count = 0;
    if (d[n / 2] != d[n / 2 - 1])
    {
        for (int i = d[n / 2 - 1] + 1; i <= d[n / 2]; i++)
        {
            count++;
        }
    }
    cout << count << endl;
}
