#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	long long n;
	cin >> n;

	if (n <= 5) {
		cout << n << "\n";
		return 0;
	}

	while (n > 5) {
		n -= 8;
	}

	int result = n;

	if (result <= 0) {
		result = 2 + (result * -1);
	}
	cout << result << "\n";

	return 0;
}