#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  ll pos = 1;
  ll n, k;
  cin >> n >> k;
  for (ll i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      if (pos == k) {
        cout << i << endl;
        return;
      }
      pos++;
    }
  }
  for (ll i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      if (pos == k) {
        cout << i << endl;
        return;
      }
      pos++;
    }
  }
}

int main() {
  solve();
  return 0;
}
