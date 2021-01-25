#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    vector<int> vec(4);
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "AC")
        {
            vec.at(0)++;
        }
        else if (s == "WA")
        {
            vec.at(1)++;
        }
        else if (s == "TLE")
        {
            vec.at(2)++;
        }
        else
        {
            vec.at(3)++;
        }
    }
    cout << "AC x" << ' ' << vec.at(0) << endl;
    cout << "WA x" << ' ' << vec.at(1) << endl;
    cout << "TLE x" << ' ' << vec.at(2) << endl;
    cout << "RE x" << ' ' << vec.at(3) << endl;
}
