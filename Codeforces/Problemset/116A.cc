#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;


// Example
/*
  We have 4 stops

  1 - 0 leave, 3 enter, currentNumPassengers = 3
  2 - 2 leave, 5 enter, currentNumPassengers = 6
  3 - 4 leave, 2 enter, currentNumPassengers = 4
  4 - 4 leave, 0 enter, currentNumPassengers = 0

*/

void solve() {
  vector<int> numPassengersPerStop;
  int minCapacity = -1; // Minimum possible capcity of the tram
  int n; // Number of tram's stops
  cin >> n;

  int currentNumPassengers = 0;

  for (int i = 1; i <= n; i++) {
    int a; // Number of passengers that exits the tram at the i-th stop
    int b; // Number of passengers that enter the tram at the i-th stop
    cin >> a >> b;

    if (currentNumPassengers > 0) {
      currentNumPassengers -= a;
    }

    currentNumPassengers += b;

    // a < total number of people in the tram
    // At the last stop, tram becomes empty (all passengers exit)
    if (i == n) {
      currentNumPassengers = 0;
    }
    // No passenger enter at the last stop
    numPassengersPerStop.push_back(currentNumPassengers);
  }

  minCapacity =  *max_element(numPassengersPerStop.begin(), numPassengersPerStop.end());

  cout << minCapacity << endl;
}

int main() {
  solve();
  return 0;
}

