#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    set<int> st;
    for (int i = a; i <= b; i++)
    {
        if (i <= a + k - 1)
        {
            st.insert(i);
        }
        if (i >= b - k + 1)
        {
            st.insert(i);
        }
    }
    for (auto x : st)
    {
        cout << x << endl;
    }
}
