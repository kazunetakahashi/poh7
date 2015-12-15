#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  bool now = false;
  string ans = "";
  for (auto i = 0; i < m; i++) {
    if (i%n == 0) {
      now = !now;
    }
    ans += (now ? "R" : "W");
  }
  cout << ans << endl;
}
