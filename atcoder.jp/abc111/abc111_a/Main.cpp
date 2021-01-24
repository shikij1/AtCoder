#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, char> mp;
    mp['1'] = '9';
    mp['9'] = '1';
    cout << mp[s.at(0)] << mp[s.at(1)] << mp[s.at(2)] << endl;
}
