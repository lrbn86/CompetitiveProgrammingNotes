#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

int mex(vector<int> set) {
  int result = 0;
  if (set.empty()) return result;
  int max = *max_element(set.begin(), set.end());
  if (count(set.begin(), set.end(), max - 1)) {
    result = max - 1;
  } else if (count(set.begin(), set.end(), max + 1)) {
    result = max + 1;
  }
  return result;
}

void solve() {
  vector<int> set;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    set.push_back(a);
  }

  // Print the max value of mex(A) + mex(B)
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}

