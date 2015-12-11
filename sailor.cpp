#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  string S[20];
  for (auto i = 0; i < n; i++) {
    cin >> S[i];
  }
  for (auto i = 0; i < n; i++) {
    cout << S[i];
    if (i < n-1) cout << "_";
  }
  cout << endl;
}
