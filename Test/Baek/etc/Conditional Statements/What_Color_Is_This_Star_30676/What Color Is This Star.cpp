#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int lambda;
	cin >> lambda;

	if (lambda >= 620) {
		cout << "Red" << endl;
	} else if (lambda >= 590) {
		cout << "Orange" << endl;
	} else if (lambda >= 570) {
		cout << "Yellow" << endl;
	} else if (lambda >= 495) {
		cout << "Green" << endl;
	} else if (lambda >= 450) {
		cout << "Blue" << endl;
	} else if (lambda >= 425) {
		cout << "Indigo" << endl;
	} else {
		cout << "Violet" << endl;
	}

	return 0;
}