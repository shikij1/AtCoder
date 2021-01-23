#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int ans;
    cin >> a >> b;
    ans = stoi(a + b);
    bool flag = false;
    for (int i = 0; i < 1000; i++)
    {
        if (ans == i * i)
        {
            flag = true;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;
}
