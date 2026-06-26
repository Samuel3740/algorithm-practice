#include <iostream>
using namespace std;

int main() {
	int x, y;
    int sum = 0;
   
	cin >> x >> y;

	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
   

	for (int i = 0; i < x - 1; ++i) {
		sum += month[i];
	}

	sum += y;

	cout << day[sum % 7] << endl;
   
	return 0;
}