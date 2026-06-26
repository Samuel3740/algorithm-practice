#include <iostream>
using namespace std;

int main(){
    int n, num;
    int sum = 0;
    
    while(cin >> num){
        sum += num;
    }
    
    cout << sum << endl;
    
    return 0;
}