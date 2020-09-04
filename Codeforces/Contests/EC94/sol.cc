#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string ans;
  for (int i = 0; i < s.size(); i += 2) {
    ans += s[i];
  }
  cout << ans << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}

