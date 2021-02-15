#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int h, m;
    cin >> h >> m;
    double t1 = 2 * M_PI * (60 * h + m) / 720.0;
    double t2 = 2 * M_PI * m / 60.0;
    double t = abs(t1 - t2);
    double mi = min(t, 2 * M_PI - t);
    double ans = sqrt(a * a + b * b - 2 * a * b * cos(mi));
    cout << fixed << setprecision(15);
    cout << ans << "\n";
}
