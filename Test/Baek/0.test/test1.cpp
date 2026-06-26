#include <iostream>
using namespace std;

int main(){
	int arrlength, input; 
    int num = 0; 
	cin >> arrlength;
    
	int* arr = new int[arrlength];
    
	for(int i = 0; i < arrlength; i++){
        cin >> arr[i];
    }
	cin >> input;
    
	for(int i = 0; i < arrlength; i++){
        if (input == arr[i]) ++num;
    }
	cout << num;
}