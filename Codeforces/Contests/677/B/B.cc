#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr) {
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i + 1 < arr.size()) {
      cout << ", ";
    }
  }
  cout << "]\n" << endl;
}

void solve() {
  vector<int> arr;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  printArray(arr);
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}
