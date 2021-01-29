#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> t(n, vector<int>(n));
    vector<int> ary(n - 1);
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            ary[i - 1] = i;
        }
        for (int j = 0; j < n; j++)
        {
            cin >> t[i][j];
        }
    }
    int ans = 0;
    do
    {
        int sum = 0;
        sum += t[0][ary[0]];
        for (int i = 0; i < n - 2; i++)
        {
            sum += t[ary[i]][ary[i + 1]];
        }
        sum += t[ary[n-2]][0];
        if(sum == k){
            ans++;
        }
    } while (next_permutation(ary.begin(), ary.end()));
    cout << ans << endl;
}
