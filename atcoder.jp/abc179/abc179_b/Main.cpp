#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> vec(N, vector<int>(2));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> vec.at(i).at(j);
        }
    }
    string answer = "No";
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (vec.at(i).at(0) == vec.at(i).at(1))
        {
            count++;
            if (count >= 3)
            {
                answer = "Yes";
                break;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << answer << endl;
}
