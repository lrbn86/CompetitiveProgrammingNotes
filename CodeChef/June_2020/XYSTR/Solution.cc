#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  int count = 0;
  string S;
  cin >> S;
  int N = S.length();
  for (int i = 0; i < N-1; i++) {
    char a = S[i];
    char b = S[i+1];
    if ((a == 'x' && b == 'y') || (a == 'y' && b == 'x')) {
      count++;
      i++;
    }
  }
  cout << count << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}

