#include <bits/stdc++.h>
using namespace std;

/*  make_is_prime(N)
    入力：整数 N
    出力：N までの数字が素数か判定したベクトル（i番目がtrueならiは素数）
    計算量：O(nloglogn)
*/
vector<bool> make_is_prime(int N) {
    vector<bool> prime(N + 1, true);
    if (N >= 0) prime[0] = false;
    if (N >= 1) prime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= N; j += i) {
            prime[j] = false;
        }
    }
    return prime;
}

int main() {
    vector<bool> prime;
    prime = make_is_prime(1e5);
    vector<int> s(1e5 + 2);
    for (int i = 0; i <= 1e5; i++) {
        if (i % 2 == 0) {
            s[i + 1] = s[i];
            continue;
        }
        if (prime[i] && prime[(i + 1) / 2]) {
            s[i + 1] = s[i] + 1;
        } else {
            s[i + 1] = s[i];
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << s[r + 1] - s[l] << endl;
    }
}
