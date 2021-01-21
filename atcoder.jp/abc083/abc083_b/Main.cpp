#include <bits/stdc++.h>
using namespace std;
string N;
int A, B;

int sum_digit(int n)
{
    int sum = 0;
    while (n > 0)
    { // n が 0 になるまで
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int N, A, B, total = 0;
    cin >> N >> A >> B;
    for (int i = 1; i <= N; ++i)
    {
        int sum = sum_digit(i); // i の各桁の和
        if (sum >= A && sum <= B)
        { //  i の各桁の和が A 以上 B 以下かどうか
            total += i;
        }
    }
    cout << total << endl;
}
