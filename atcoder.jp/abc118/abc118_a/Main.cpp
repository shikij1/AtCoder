#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    b % a == 0 ? cout << a + b << endl : cout << b - a << endl;
}
