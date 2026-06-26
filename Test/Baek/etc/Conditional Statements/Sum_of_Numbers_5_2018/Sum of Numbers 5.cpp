#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int end = 1;
	int sum = 1;
	int count = 1;
	int start = 1;

	cin >> n;

	while (end < n) {
		if (sum == n) {
			count++;
			end++;
			sum += end;
		} else if (sum < n) {
			end++;
			sum += end;
		} else {
			sum -= start;
			start++;
		}
	}
	cout << count << endl;

	return 0;
}