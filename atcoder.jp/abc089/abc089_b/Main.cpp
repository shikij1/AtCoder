#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<char> s;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        s.insert(c);
    }
    cout << (s.size() == 4 ? "Four" : "Three") << endl;
}
