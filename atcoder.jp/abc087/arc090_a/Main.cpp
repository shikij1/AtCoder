#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 0), b(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        a.at(i + 1) = a.at(i) + c;
    }
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        b.at(i + 1) = b.at(i) + c;
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        sum = a.at(i + 1) + b.at(n) - b.at(i);
        ans = max(ans, sum);
    }
    cout << ans << endl;
}
