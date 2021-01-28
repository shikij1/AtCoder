#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n), p(n), q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p.at(i);
        vec.at(i) = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q.at(i);
    }
    int rep = 1, a, b;
    do
    {
        int count_p = 0, count_q = 0;
        for (int i = 0; i < n; i++)
        {
            if (p.at(i) == vec.at(i))
            {
                count_p++;
            }

            if (q.at(i) == vec.at(i))
            {
                count_q++;
            }
        }
        if (count_p == n)
        {
            a = rep;
        }
        if (count_q == n)
        {
            b = rep;
        }
        rep++;

    } while (next_permutation(vec.begin(), vec.end()));
    cout << abs(a - b) << endl;
}
