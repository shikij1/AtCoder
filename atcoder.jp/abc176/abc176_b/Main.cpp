#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < (int)n.size(); i++)
    {
        sum += n.at(i) - '0';
    }
    cout << (sum % 9 == 0 ? "Yes" : "No") << endl;
}
