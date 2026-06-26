#include <iostream>
using namespace std;

int main(){
	int N; 
	int count = 0;
	string input;
	cin >> N;
    
	for (int i = 0; i < N; ++i){
		bool TF = true;
		cin >> input;

		for (int j = 0; j < input.length(); ++j){
			for (int n = 0; n < j; ++n){
				if ((input[j] == input[n]) && (input[j] != input[j - 1])){
					TF = false; 
					break;
					}
			}
		}
		if (TF){
			count += 1;
		}
	}
	cout << count;
}