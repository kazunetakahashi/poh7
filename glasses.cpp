#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
  int N;
  cin >> N;
  bool table[110][110];
  for (auto i = 0; i < N; i++) {
    for (auto j = 0; j < N; j++) {
      cin >> table[i][j];
    }
  }
  int M;
  cin >> M;
  bool x[20][20];
  for (auto i = 0; i < M; i++) {
    for (auto j = 0; j < M; j++) {
      cin >> x[i][j];
    }
  }
  for (auto i = 0; i <= N-M; i++) {
    for (auto j = 0; j <= N-M; j++) {
      for (auto k = 0; k < M; k++) {
        for (auto l = 0; l < M; l++) {
          if (table[i+k][j+l] != x[k][l]) {
            //cerr << i << " " << j << " " << k << " " << l << endl;
            goto EXIT;
          }
        }
      }
      cout << i << " " << j << endl;
      return 0;
    EXIT:
      continue;
    }
  }
}
