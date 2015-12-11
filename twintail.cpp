#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << ((a*d > b*c) ? 1 : 2) << endl;
}
