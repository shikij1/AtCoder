#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    for (long long i = 1; i < n; i++)
    {
        if (a[i - 1] - a[i] > 0)
        {
            sum += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << sum << endl;
}
