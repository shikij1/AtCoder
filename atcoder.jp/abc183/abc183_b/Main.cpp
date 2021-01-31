#include <bits/stdc++.h>
using namespace std;
int main() {
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    cout << fixed << setprecision(15);
    cout << (gx - sx) * sy / (sy + gy) + sx << '\n';
}
