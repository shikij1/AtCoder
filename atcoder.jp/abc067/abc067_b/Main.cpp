#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += vec.at(i);
    }

    cout << ans << endl;
}
