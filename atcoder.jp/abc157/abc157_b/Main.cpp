#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<pair<int, bool>>> a(3, vector<pair<int, bool>>(3));
    int num;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> num;
            a[i][j].first = num;
        }
    }
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < n; k++) {
                if (a[i][j].first == b[k]) {
                    a[i][j].second = true;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        int cntr = 0;
        int cntc = 0;
        for (int j = 0; j < 3; j++) {
            if (a[i][j].second) {
                cntr++;
            }
            if (a[j][i].second) {
                cntc++;
            }
        }
        if (cntr == 3) {
            cout << "Yes" << '\n';
            return 0;
        }
        if (cntc == 3) {
            cout << "Yes" << '\n';
            return 0;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i][i].second) {
            cnt1++;
        }
    }
    if (cnt1 == 3) {
        cout << "Yes" << '\n';
        return 0;
    }
    int cnt2 = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i][2 - i].second) {
            cnt2++;
        }
    }
    if (cnt2 == 3) {
        cout << "Yes" << '\n';
        return 0;
    }

    cout << "No" << '\n';
    return 0;
}
