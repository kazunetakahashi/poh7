#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;

ll M = 1000000000;

ll pow(ll a, ll n) {
  if (n == 0) return 1;
  if (n%2 == 0) {
    ll x = pow(a, n/2);
    return (x*x)%M;
  }
  return (pow(a, n-1) * a)%M;
}

int main() {
  ll N;
  cin >> N;
  int two = 0;
  int five = 0;
  ll ans = 1;
  for (auto i = 1; i <= N; i++) {
    ll now = i;
    while (now%2 == 0) {
      two++;
      now /= 2;
    }
    while (now%5 == 0) {
      five++;
      now /= 5;
    }
    ans *= now;
    ans %= M;
  }
  ll a = ((two > five) ? 2 : 5);
  ll n = abs(two - five);
  ans *= pow(a, n);
  ans %= M;
  cout << ans << endl;
}
