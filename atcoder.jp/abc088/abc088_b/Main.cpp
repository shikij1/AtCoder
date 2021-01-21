#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
        { // Alice のターン
            Alice += vec[i];
        }
        else
        { // Bob のターン
            Bob += vec[i];
        }
    }
    cout << Alice - Bob << endl;
}
