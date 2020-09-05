#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  if (s.length() == 0) {
    cout << 0 << endl;
    return;
  }

  int answer = 0;
  for (int i = 0; i < s.length(); i++) {
    while (i + 1 < s.length() && s[i] == s[i + 1]) {
      s.erase(i + 1, 1);
      answer++;
    }
  }

  cout << answer << endl;
}

int main() {
  solve();
  return 0;
}

