#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, a, b, ans = 0;
    cin >> n >> a >> b;
    ans += a * (n / (a + b));
    if (n % (a + b) >= a) {
        ans += a;
    } else {
        ans += n % (a + b);
    }
    cout << ans << endl;
}
