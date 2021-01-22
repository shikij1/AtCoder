#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            count++;
        }
    }
    cout << fixed << setprecision(10);
    cout << count / n << endl;
}
