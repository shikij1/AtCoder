#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p.at(i);
        if (p.at(i) != i + 1)
        {
            count++;
        }
    }
    cout << ((count == 2 || count == 0) ? "YES" : "NO") << endl;
}
