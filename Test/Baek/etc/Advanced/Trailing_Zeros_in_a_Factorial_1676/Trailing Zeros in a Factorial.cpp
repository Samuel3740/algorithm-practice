#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int count = 0;

	cin >> n;

	while (n >= 5) {
		count += n / 5;
		n /= 5;
	}

	cout << count << "\n";

	return 0;
}