#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i <= 100000; i++) {
        if (i * 2 / 25 == a && i / 10 == b) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
