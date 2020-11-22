#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> vec) {
	cout << "[";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
		if (i + 1 < vec.size()) {
			cout << ", ";
		}
	}
	cout << "]\n";
}

vector<int> getProperDivisors(int n) {
	vector<int> divisors;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			divisors.push_back(i);
		}
	}
	return divisors;
}

void solve() {
	int moves = 0;
	int n;
	cin >> n;
	if (n == 1) {
		cout << moves << endl;
		return;
	}
	vector<int> divisors = getProperDivisors(n);
	int i = divisors.size() - 1;
	while (n != 1) {
		if (n == 2 || n == 3) {
			n -= 1;
			moves++;
		} else {
			n /= divisors[i];
			moves++;
			i--;
		}
	}
	cout << moves << endl;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}

