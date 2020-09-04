#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {

  map<char, int> mp;

  bool possible = true;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (char c : s) {
      mp[c]++;
    }
  }

  for (auto x : mp) {
    if (x.second % n != 0) {
      possible = false;
      break;
    }
  }

  cout << (possible ? "YES" : "NO") << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}

