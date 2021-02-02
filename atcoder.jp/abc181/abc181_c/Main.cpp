#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v[i] = make_pair(x, y);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int x1, y1, x2, y2, x3, y3;
                tie(x1, y1) = v[i];
                tie(x2, y2) = v[j];
                tie(x3, y3) = v[k];
                if (x1 == x2 && x2 == x3) {
                    cout << "Yes" << endl;
                    return 0;
                }
                if ((y1 - y2) * (x2 - x3) == (y2 - y3) * (x1 - x2)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}
