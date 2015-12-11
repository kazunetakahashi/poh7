#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
  int X, Y, Z, N;
  cin >> X >> Y >> Z >> N;
  int d[110];
  int a[110];
  for (auto i = 0; i < N; i++) {
    cin >> d[i] >> a[i];
  }
  vector<int> V[2];
  for (auto i = 0; i < N; i++) {
    V[d[i]].push_back(a[i]);
  }
  V[0].push_back(X);
  V[1].push_back(Y);
  vector<int> W[2];
  int x = Z;
  for (auto i = 0; i < 2; i++) {
    V[i].push_back(0);
    sort(V[i].begin(), V[i].end());
    for (auto it = V[i].begin(); it != V[i].end()-1; it++) {
      W[i].push_back(*(it+1) - *it);
    }
    x *= *min_element(W[i].begin(), W[i].end());
  }
  cout << x << endl;
}
