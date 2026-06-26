#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string line;
		getline(cin, line);

		line[0] = toupper(line[0]);

		cout << line << "\n";
	}

	return 0;
}