#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> K(3);

	cin >> K[0];
	cin >> K[1];
	cin >> K[2];
	
	sort(K.begin(), K.end());

	cout << max(K[2] - K[1], K[1] - K[0]) - 1 << endl;

	return 0;
}