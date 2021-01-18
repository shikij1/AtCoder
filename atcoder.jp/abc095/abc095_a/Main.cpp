#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int answer = 700;
    if (s.at(0) == 'o')
        answer += 100;
    if (s.at(1) == 'o')
        answer += 100;
    if (s.at(2) == 'o')
        answer += 100;

    cout << answer << endl;
}
