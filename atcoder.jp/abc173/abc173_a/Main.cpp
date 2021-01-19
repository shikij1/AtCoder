#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N > 9000)
        cout << 10000 - N << endl;
    else if (N > 8000)
        cout << 9000 - N << endl;
    else if (N > 7000)
        cout << 8000 - N << endl;
    else if (N > 6000)
        cout << 7000 - N << endl;
    else if (N > 5000)
        cout << 6000 - N << endl;
    else if (N > 4000)
        cout << 5000 - N << endl;
    else if (N > 3000)
        cout << 4000 - N << endl;
    else if (N > 2000)
        cout << 3000 - N << endl;
    else if (N > 1000)
        cout << 2000 - N << endl;
    else
        cout << 1000 - N << endl;
}
