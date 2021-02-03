#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c, d, ans;
    cin >> a >> b >> c >> d;
    ans = b - a + 1;

    ans -= b / c - (a -1)/c;
    ans -= b / d - (a -1)/d;
    long long lcm = c / __gcd(c, d) * d;
    ans += b / (lcm) - (a-1)/(lcm);
    cout << ans <<endl;
}
