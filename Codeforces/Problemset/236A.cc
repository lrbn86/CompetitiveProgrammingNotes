#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  string s; cin >> s;
  // If the number of distinct characters is odd, they are male
  // otherwise female
  bool shouldChat = true;
  int count = 0;

  set<char> sp (s.begin(), s.end());

  count = sp.size();

  if (count % 2) {
    shouldChat = false;
  }

  cout << (shouldChat ? "CHAT WITH HER!" : "IGNORE HIM!") << endl; 
}

int main() {
  solve();
  return 0;
}

