#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int answer;
    answer = max(a + b, a - b);
    answer = max(answer, a * b);
    cout << answer << endl;
}
