#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int height_max, height_min;
  height_max = max(A, B);
  height_max = max(height_max, C);
  height_min = min(A, B);
  height_min = min(height_min, C);
  cout << height_max - height_min << endl;
}
