#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	long long n;
	cin >> n;

	cout << ((n & (n - 1)) == 0 ? 1 : 0) << endl;

	return 0;
}