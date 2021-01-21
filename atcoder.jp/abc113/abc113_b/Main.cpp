#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, t, a;
    int ans = 0;
    cin >> n >> t >> a;
    vector<double> h(n);

    for (int i = 0; i < n; i++)
    {
        double h_tmp;
        cin >> h_tmp;
        h[i] = abs(t - (h_tmp * 0.006) - a);
    }

    ans = min_element(h.begin(), h.end()) - h.begin();

    cout << ans + 1 << endl;
}
