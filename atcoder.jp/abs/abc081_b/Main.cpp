#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
    
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int ans = 0;
  bool flag = false;
  while(true){
    for(int i = 0; i < N; i++){
      if (vec.at(i) % 2 != 0)
        flag = true;
      vec.at(i) /= 2;
    }
    if(flag) break;
    ans++;
  }
  cout << ans << endl;
}