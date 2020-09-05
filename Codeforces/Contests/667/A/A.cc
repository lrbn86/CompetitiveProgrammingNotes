#include <chrono>
#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;
  if (a == b) {
    cout << 0 << endl;
    return;
  }
  int moves = 0;

  if (a < b) {
    while (a != b) {
      int diff = b - a;
      if (diff > 10) {
        a += 10;
        moves++;
      } else {
        a += diff;
        moves++;
      }
    }
  } else if (a > b) {
    while (a != b) {
      int diff = a - b;
      if (diff > 10) {
        a -= 10;
        moves++;
      } else {
        a -= diff;
        moves++;
      }
    }
  }
  cout << moves << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    auto start = chrono::steady_clock::now();
    solve();
    auto end = chrono::steady_clock::now();
    cout << "Elapsed time in seconds: " << chrono::duration_cast<chrono::seconds>(end - start).count() << " secs" << endl;
  }
  return 0;
}

