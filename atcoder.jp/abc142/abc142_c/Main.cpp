#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec.at(i) = make_pair(a, i);
    }
    sort(vec.begin(), vec.end());
    int b;

    for (int i = 0; i < n; i++)
    {
        tie(b, a) = vec.at(i);
        if (i == n - 1)
        {
            cout << a + 1 << endl;
        }
        else
        {
            cout << a + 1 << ' ';
        }
    }
}
