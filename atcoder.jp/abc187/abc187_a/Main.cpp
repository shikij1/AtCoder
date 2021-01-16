#include <iostream>
#include <string>
using namespace std;
int S(string n){
    int ret = 0;
    ret += n[0] - '0';
    ret += n[1] - '0';
    ret += n[2] - '0';
    return ret;
}
int main(){
    string A, B;
    cin >> A >> B;
    cout << max(S(A), S(B)) << endl;
}