#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {

        for (int j = 0; j < w; j++)
        {
            cin >> a.at(i).at(j);
        }
    }
    set<int> row, col;
    for (int i = 0; i < h; i++)
    {
        int sum = 0;
        for (int j = 0; j < w; j++)
        {
            if (a.at(i).at(j) == '.')
            {
                sum++;
            }
        }
        if (sum == w)
        {
            row.insert(i);
        }
    }

    for (int i = 0; i < w; i++)
    {
        int sum = 0;
        for (int j = 0; j < h; j++)
        {
            if (a.at(j).at(i) == '.')
            {
                sum++;
            }
        }
        if (sum == h)
        {
            col.insert(i);
        }
    }

    for (int i = 0; i < h; i++)
    {
        if (row.find(i) != row.end())
        {
            continue;
        }
        for (int j = 0; j < w; j++)
        {
            if (col.find(j) != col.end())
            {
                continue;
            }
            cout << a.at(i).at(j);
        }
        cout << endl;
    }
}
