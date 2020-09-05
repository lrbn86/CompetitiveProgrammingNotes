#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  int k; // The cost of the first banana
  int n; // Initial number of dollars the soldier has
  int w; // Number of bananas he wants
  cin >> k >> n >> w;
  int amountToBorrow = 0;
  
  int totalCost = 0;

  for (int i = 1; i <= w; i++) {
    totalCost += i * k;
  }

  amountToBorrow = totalCost - n;

  // Example
  // Cost of first banana is 3
  // He only has 17 on him
  // He wants 4 bananas
  // 1*3 + 2*3 + 3*3 + 4*3 = 3 + 6 + 9 + 12 = 30
  // 30 - 17 = 13
  // He needs to borrow 13

  if (amountToBorrow < 0) {
    amountToBorrow = 0;
  }

  cout << amountToBorrow << endl;
}

int main() {
  solve();
  return 0;
}

