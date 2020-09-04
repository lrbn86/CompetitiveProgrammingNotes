#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  stringstream ss(s);
  vector<string> strs;
  string item;
  while (getline(ss, item, '+')) {
    strs.push_back(item);
  }
  
  sort(strs.begin(), strs.end());

  string result = "";

  for (int i = 0; i < strs.size(); i++) {
    result += strs[i];
    if (i + 1 < strs.size()) {
      result += '+';
    }
  }

  cout << result << endl;

  return 0;
}

