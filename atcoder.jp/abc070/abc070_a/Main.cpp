#include <bits/stdc++.h>
using namespace std;
int main()
{
    string N;
    cin >> N;
    string res;
    res = N;
    reverse(N.begin(), N.end());
    res == N ? cout << "Yes" << endl : cout << "No" << endl;
}
