#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = 1;
  for (auto i = 1; i <= n; i++) {
    x *= i;
  }
  cout << x << endl;
}
