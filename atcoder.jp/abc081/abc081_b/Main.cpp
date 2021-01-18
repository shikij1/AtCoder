#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }
    bool flag = false;
    int answer = 0;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (vec.at(i) % 2 != 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            break;
        for (int i = 0; i < n; i++)
        {
            vec.at(i) /= 2;
        }
        answer++;
    }
    cout << answer << endl;
}
