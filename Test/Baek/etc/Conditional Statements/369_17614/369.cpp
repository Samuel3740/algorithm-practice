#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int ans = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int x = i;

		while (x > 0) {
			int d = x % 10;

			if (d == 3 || d == 6 || d == 9) {
				ans++;
			}
			x /= 10;
		}
	}
	cout << ans << endl;

	return 0;
}