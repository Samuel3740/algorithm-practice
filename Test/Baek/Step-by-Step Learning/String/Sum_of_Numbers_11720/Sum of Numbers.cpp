#include <iostream>
using namespace std;

int main(){
    int N;
    int sum = 0;
    string input; 
    
    cin >> N;
    cin >> input;
    
    for(int i = 0; i < N; ++i){
        cin >> input[i];
    }
    
    for(int i = 0; i < N; ++i){
        sum += input[i] - '0';
    }
    cout << sum <<endl;
}