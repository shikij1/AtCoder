#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l.at(i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                vector<int> ary;
                ary.push_back(l.at(i));
                ary.push_back(l.at(j));
                ary.push_back(l.at(k));
                sort(ary.begin(), ary.end());
                if ((l.at(i) != l.at(j)) && (l.at(j) != l.at(k)) && (l.at(k) != l.at(i)) && ary.at(2) < (ary.at(0) + ary.at(1)))
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
