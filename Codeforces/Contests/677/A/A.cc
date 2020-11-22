#include <bits/stdc++.h>
using namespace std;

void solve() {
  int numKeyPresses = 0;
  int x;
  cin >> x;
  int lastDigit = x % 10; // lastDigit == firstDigit

  for (int i = 1; i <= 9; i++) {
    numKeyPresses += 10;
    if (i == lastDigit) break;
  } 

  int numDigits = 0;

  while (x != 0) {
    x /= 10;
    numDigits++;
  }

  int leftover = 0;

  for (int i = 1; i <= numDigits; i++) {
    leftover += i;
  }

  numKeyPresses = numKeyPresses - (10 - leftover);

  cout << numKeyPresses << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}
