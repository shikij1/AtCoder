#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int cnt = 0;
    for (int i = 1; i < n - 1; i++) {
        vector<int> ary = {p[i - 1], p[i], p[i + 1]};
        sort(ary.begin(), ary.end());
        if (ary[1] == p[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
