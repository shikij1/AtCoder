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
    int x = stoi(n);
    cout << (x % sum == 0 ? "Yes" : "No") << endl;
}
