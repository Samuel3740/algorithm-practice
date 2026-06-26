#include <iostream>
#include <vector>
using namespace std;

int main() {
	int A, B;
	int sum = 0;
	vector<int> sequence;

	cin >> A >> B;

	for (int i = 1; sequence.size() < B; i++) {
		for (int j = 0; j < i; j++) {
			sequence.push_back(i);
			if (sequence.size() == B) {
				break;
			}
		}
	}

	for (int i = A - 1; i < B; i++) {
		sum += sequence[i];
	}

	cout << sum << endl;

	return 0;
}