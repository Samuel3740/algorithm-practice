#include<iostream>
using namespace std;

int main(){
	int A, B, T;
    
	cin >> T;
    
	for (int i = 1; i < T + 1; i++){
		cin >> A >> B;
		cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << endl;
	}
}