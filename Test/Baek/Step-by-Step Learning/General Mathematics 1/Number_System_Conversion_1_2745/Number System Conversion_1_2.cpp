#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
    int N; 
    int result = 0;

	string str; 
	string dchar = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cin >> str >> N;

	for(int i = 0; i < str.length(); ++i){
		int d = dchar.find(str[i]);
		result += d * pow(N, str.length() - 1 - i);
	}
	cout << result;
}