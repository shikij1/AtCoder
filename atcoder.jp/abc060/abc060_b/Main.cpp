#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int start = a % b;
    int n = 1;
    int now = -1;
    while (start != now) {
        if ((n * a) % b == c) {
            cout << "YES" << '\n';
            return 0;
        }
        n++;
        now = (n * a) % b;
    }
    cout << "NO" << '\n';
}
