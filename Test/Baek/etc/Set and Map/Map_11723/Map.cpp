#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int m;
	int x;
	int s = 0;
	string op;

	cin >> m;

	while (m--) {
		cin >> op;

		if (op == "add") {
			cin >> x;
			s |= (1 << x);
		} else if (op == "remove") {
			cin >> x;
			s &= ~(1 << x);
		} else if (op == "check") {
			cin >> x;

			if (s & (1 << x)) {
				cout << 1 << '\n';
			} else {
				cout << 0 << '\n';
			}
		} else if (op == "toggle") {
			cin >> x;
			s ^= (1 << x);
		} else if (op == "all") {
			s = (1 << 21) - 1;
		} else if (op == "empty") {
			s = 0;
		}
	}

	return 0;
}