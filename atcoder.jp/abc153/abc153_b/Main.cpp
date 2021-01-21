#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, n;
    cin >> h >> n;
    vector<int> vec(n);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
        h -= vec.at(i);
        if (h <= 0)
            flag = true;
    }

    cout << (flag ? "Yes" : "No") << endl;
}
