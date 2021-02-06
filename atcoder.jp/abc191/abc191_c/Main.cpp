#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define rep(i, n) for (int i = 0, i##_len=(n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len=(n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const double pi = acos(-1.0);
const int mod = 1000000007;
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

void solve() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    int ans = 0;
    for(int i =0;i<h;i++){
        for(int j = 0;j<w;j++){
            cin >> s[i][j];
        }
    }
    for(int i =0;i<h-1;i++){
        for(int j = 0;j<w-1;j++){
            int dot = 0;
            if(s[i][j] == '.'){
                dot += 1;
            }
            if(s[i+1][j] == '.'){
                dot += 1;
            }
            if(s[i][j+1] == '.'){
                dot += 1;
            }
            if(s[i+1][j+1] == '.'){
                dot += 1;
            }
            if(dot == 1 || dot == 3){
                ans++;
            }
        }
    }
    cout << ans << '\n';
}



signed main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    solve();
    return 0;
}
