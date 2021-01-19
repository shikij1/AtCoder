#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(5);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec.at(i);
        if (vec.at(i) == 0)
            cout << i + 1 << endl;
    }
}
