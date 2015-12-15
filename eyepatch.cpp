#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  int M[2];
  cin >> M[0];
  vector<int> x;
  for (auto i = 0; i < M[0]; i++) {
    int t;
    cin >> t;
    x.push_back(t);
  }
  cin >> M[1];
  vector<int> y;
  for (auto i = 0; i < M[1]; i++) {
    int t;
    cin >> t;
    y.push_back(t);
  }
  bool visited[1010];
  fill(visited, visited+1010, false);
  for (auto t : y) {
    visited[t] = true;
  }
  for (auto t : x) {
    visited[t] = false;
  }
  vector<int> ans;
  for (auto i = 0; i <= N; i++) {
    if (visited[i]) {
      ans.push_back(i);
    }
  }
  if (ans.empty()) {
    cout << "None" << endl;
  } else {
    for (auto it = ans.begin(); it != ans.end(); it++) {
      cout << *it;
      if (it+1 != ans.end()) {
        cout << " ";
      }
    }
    cout << endl;
  }
}
