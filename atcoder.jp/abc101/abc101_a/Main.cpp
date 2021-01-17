#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int answer = 0;
    cin >> str;
    for (int x : str)
    {
        if (x == '-')
        {
            answer -= 1;
        }
        else
        {
            answer += 1;
        }
    }
    cout << answer << endl;
}
