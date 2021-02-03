#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ans = 1e12;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans = min(i + n / i - 2, ans);
        }
    }
    cout << ans << endl;
}
