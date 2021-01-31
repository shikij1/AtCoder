#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const double pi = acos(-1.0);
const int mod = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

void solve() {
    int N, M;
    cin >> N >> M;

    // グラフ
    Graph G(N + 1);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);

        // 無向グラフの場合は以下を追加
        G[b].push_back(a);
    }
    vector<int> ary(N);
    for (int i = 0; i < N; ++i) {
        ary[i] = i + 1;
    }
    int ans = 0;
    bool flag, flag2;
    do {
        for (int i = 0; i < N - 1; ++i) {
            flag = false, flag2 = false;
            for (auto e : G[ary[i]]) {
                if (e == ary[i + 1]) {
                    flag = true;
                }
            }
            if (flag == false) {
                flag2 = true;
                break;
            }
        }
        if (flag2) {
            continue;
        }
        ans++;
    } while (next_permutation(ary.begin() + 1, ary.end()));
    cout << ans << '\n';
}

signed main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
