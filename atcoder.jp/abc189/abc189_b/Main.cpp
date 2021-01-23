#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n), p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v.at(i) >> p.at(i);
    }
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v.at(i) * p.at(i);
        if (sum > x * 100)
        {
            ans = i + 1;
            break;
        }
    }
    cout << (ans ? ans : -1) << endl;
}
