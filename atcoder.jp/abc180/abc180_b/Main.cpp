#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> vec(n);
    for (int i; i < n; i++)
    {
        cin >> vec.at(i);
    }
    long long man = 0;
    double yu = 0;
    for (int i = 0; i < n; i++)
    {
        man += abs(vec.at(i));
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += vec.at(i) * vec.at(i);
    }

    cout << fixed << setprecision(15);
    cout << man << endl;
    cout << sqrt(sum) << endl;
    for (int i = 0; i < n; i++)
    {
        vec.at(i) = abs(vec.at(i));
    }
    cout << *max_element(vec.begin(), vec.end()) << endl;
}
