#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int k, d, a;
	char slash;

	cin >> k >> slash >> d >> slash >> a;

	if (k + a < d || d == 0) {
		cout << "hasu";
	} else {
		cout << "gosu";
	}

	return 0;
}