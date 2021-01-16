#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int answer = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str.at(i) - '0' == 1)
        {
            answer += 1;
        }
    }
    cout << answer << endl;
    return 0;
}