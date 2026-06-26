#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string str;

	cin >> n;
    
	for (int j = 0; j < n; j++){
		cin >> str;
		int sum, cnt;
		sum = cnt = 0;
		for (int i = 0; i < str.length(); i++){
			if (str[i] == 'O') cnt++;
			else cnt = 0;
			sum += cnt;
		}
		cout << sum << endl;
	}
}