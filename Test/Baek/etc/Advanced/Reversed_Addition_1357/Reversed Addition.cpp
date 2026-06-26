#include <iostream>
using namespace std;

int rev(int x) {
	int result = 0;

	while (x > 0) {
		result = result * 10 + x % 10;
		x /= 10;
	}

	return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int x, y;
	cin >> x >> y;

	cout << rev(rev(x) + rev(y)) << endl;

	return 0;
}