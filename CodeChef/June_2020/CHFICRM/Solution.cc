#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> coins;
  while (N--) {
    int paid;
    cin >> paid;
    coins.push_back(paid);
  }

  if (coins[0] == 10 || coins[0] == 15) {
    cout << "NO" << endl;
  } else {
    bool allServed = true;
    int cost = 5;
    int current_money = 0; // Initially no money
    for (auto coin : coins) {
      int change = coin - cost;
      if (change == 0) {
        current_money += coin;
      } else if (change <= current_money) {
        current_money -= change;
      } else if (change > current_money) {
        cout << "NO" << endl;
        allServed = false;
        break;
      }
    }
    if (allServed) {
      cout << "YES" << endl;
    }
  }

}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}

