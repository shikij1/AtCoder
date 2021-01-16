#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  int answer = A;
  int i = 0;
  while(i < N){
    string op;
    int B;
    cin >> op >> B;
    if(op == "+"){
      answer += B;
    }
    else if(op == "-"){
      answer -= B;
    }
    else if(op == "*"){
      answer *= B;
    }
    else if(op == "/" && B != 0){
      answer /= B;
    }
    else{
      cout << "error" << endl;
      break;
    }
    i++;
    cout << i << ':' << answer << endl;
  }
}
