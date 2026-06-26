#include <iostream>
using namespace std;

int GCD(int a, int b){

	int number = a % b;

	while (number != 0)
	{
		a = b;
		b = number;

		number = (a % b);
	}
	return b;
}

int main(){
	int x, y, max_result, min_result;

	cin >> x >> y;
	max_result = GCD(x, y);

	cout << max_result << '\n';
	min_result = (x * y) / max_result;

	cout << min_result;
}