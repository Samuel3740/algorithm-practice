#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;

	while (T--) {
		int A[10];

		for (int i = 0; i < 10; i++) {
			cin >> A[i];
		}

		sort(A, A + 10, greater<int>());

		cout << A[2] << "\n";
	}

	return 0;
}