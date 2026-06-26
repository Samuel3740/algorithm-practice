#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string n;
	long long sum = 0;
	bool has_zero = false;

	cin >> n;

	for (char c : n) {
		sum += (c - '0');
		if (c == '0') {
			has_zero = true;
		}
	}

	if (!has_zero || sum % 3 != 0) {
		cout << -1 << "\n";
	} else {
		sort(n.begin(), n.end(), greater<char>());

		cout << n << "\n";
	}

	return 0;
}