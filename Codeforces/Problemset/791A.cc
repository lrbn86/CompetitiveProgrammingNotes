#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  int a; // Limak's weight
  int b; // Bob's weight
  // Guarantee that a <= b

  // Limak's weight 3x every year
  // Bob's weight 2x every year

  cin >> a >> b;

  // Number of years after which Limiak will become strictly heavier than Bob;
  int numberOfYears = 0;

  while (a <= b) {
    a *= 3;
    b *= 2;
    numberOfYears++;
  }

  cout << numberOfYears << endl;
}

int main() {
  solve();
  return 0;
}

