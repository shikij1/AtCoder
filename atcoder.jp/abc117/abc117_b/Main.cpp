#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int sum = 0, ma = 1, l;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        sum += l;
        ma = max(ma, l);
    }
    cout << ((ma < sum - ma) ? "Yes" : "No") << endl;
}
