#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = n % 10;
    if (res == 2 || res == 4 || res == 5 || res == 7 || res == 9)
        cout << "hon" << endl;
    else if (res == 3)
        cout << "bon" << endl;
    else
        cout << "pon" << endl;
}
