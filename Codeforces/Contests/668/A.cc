#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void solve() {
  vector<int> diffPerm;
  int n;
  cin >> n;
  while (n--) {
    int p;
    cin >> p;
    diffPerm.push_back(p);
  }

  reverse(diffPerm.begin(), diffPerm.end());

  for (int i = 0; i < diffPerm.size(); i++) {
    cout << diffPerm[i];
    if (i + 1 < diffPerm.size()) cout << " ";
  }
  cout << endl;

}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}

