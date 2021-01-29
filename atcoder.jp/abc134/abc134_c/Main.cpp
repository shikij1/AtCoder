#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ma = -1, count = 0;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        if (a[i] > ma)
        {
            ma = a[i];
            count = 0;
        }
        if (a[i] == ma)
        {
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ma && count >= 2)
        {
            cout << a[i] << endl;
        }
        else
        {
            s.erase(a[i]);
            cout << *s.rbegin() << endl;
        }
        s.insert(a[i]);
    }
}
