#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> ary(n);
    int a;
    for (int i = 2; i <= n; i++) {
        cin >> a;
        ary[a - 1]++;
    }
    for (int i = 0; i < n; i++) {
        cout << ary[i] << '\n';
    }
}
