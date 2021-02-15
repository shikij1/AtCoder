#include <bits/stdc++.h>
using namespace std;
int main()
{
    string o, e;
    cin >> o >> e;
    for(int i = 0;i<(int)o.size();i++){
        if((int)o.size() == (int)e.size()){
            cout << o[i] << e[i];
        }
        else{
            if(i<(int)o.size()-1){
                           cout << o[i] << e[i];

            }
            else{
               cout << o[i];
            }
        }
    }
    cout << endl;
}
