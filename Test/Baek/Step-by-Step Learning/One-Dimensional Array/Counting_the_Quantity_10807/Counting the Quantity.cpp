#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N, input; 
    int num = 0; 
    
	cin >> N;
    
	vector<int> arr(N);
    
	for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
	cin >> input;
    
	for(int i = 0; i < N; i++){
        if (input == arr[i]){
            ++num;
        }
    }
	cout << num << endl;
}