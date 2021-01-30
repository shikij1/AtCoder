#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, p;
    cin >> x >> n;
    int mi = 100, ans = 100;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        st.insert(p);
    }

    for (int i = -1000; i <= 1000; i++)
    {
        if (st.count(i))
        {
            continue;
        }

        if (mi >= abs(i - x))
        {
            if (mi == abs(i - x))
            {
                continue;
            }
            mi = abs(i - x);
            ans = i;
        }
    }
    cout << ans << endl;
}
