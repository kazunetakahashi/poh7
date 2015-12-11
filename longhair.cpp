#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string S[5];
  for (auto i = 0; i < 5; i++) {
    cin >> S[i];
  }
  sort(S, S+5);
  cout << S[2] << endl;
}
