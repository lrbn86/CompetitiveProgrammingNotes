#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  int initial_revenue = 0;
  int price_ceiling_revenue = 0;

  int answer = 0;
  int N, K;
  cin >> N >> K;
  
  while (N--) {
    int n;
    cin >> n;
    initial_revenue += n;
    if (n > K) {
      price_ceiling_revenue += K;
    } else {
      price_ceiling_revenue += n;
    }
  }
  answer = initial_revenue - price_ceiling_revenue;
  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}

