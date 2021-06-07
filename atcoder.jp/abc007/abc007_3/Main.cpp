#include <iomanip>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

// 4 方向への隣接頂点への移動を表すベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
  // 入力
  //横と縦の長さ
  int width, height;
  cin >> height >> width;

  // スタート地点とゴール地点の座標
  int sx, sy, gx, gy;
  cin >> sy >> sx >> gy >> gx;
  sy--;
  sx--;
  gy--;
  gx--;

  // 盤面
  vector<vector<char>> field(height, vector<char>(width));
  for (int h = 0; h < height; ++h) {
    for (int w = 0; w < width; ++w) {
      cin >> field[h][w];
    }
  }


  // 幅優先探索の初期設定
  // 各セルの最短距離 (訪れていないところは-1としておく)
  vector<vector<int>> dist(height, vector<int>(width, -1));
  dist[sy][sx] = 0;  // スタートを 0 に

  // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
  queue<pair<int, int>> que;
  // スタートをpush
  que.push(make_pair(sy, sx));

  // 幅優先探索を実施
  // キューが空になるまで
  while (!que.empty()) {
    // キューの先頭を参照
    pair<int, int> current_pos = que.front();
    int y = current_pos.first;
    int x = current_pos.second;
    que.pop();

    // 隣接頂点を探索
    for (int direction = 0; direction < 4; ++direction) {
      int next_y = y + dy[direction];
      int next_x = x + dx[direction];
      // 場外判定
      if (next_y < 0 || next_y >= height || next_x < 0 || next_x >= width)
        continue;
      // 壁判定
      if (field[next_y][next_x] == '#') continue;

      // まだ見ていない頂点なら push
      if (dist[next_y][next_x] == -1) {
        que.push(make_pair(next_y, next_x));
        // (next_x, next_y) の距離も更新
        dist[next_y][next_x] = dist[y][x] + 1;
      }
    }
  }

  // 出力
  cout << dist[gy][gx] << endl;

  return 0;
}
