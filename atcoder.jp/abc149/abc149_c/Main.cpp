#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long n)
{ // is n prime or not
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long x;
    cin >> x;
    while (1)
    {
        if (is_prime(x))
        {
            cout << x << endl;
            return 0;
        }
        x++;
    }
}
