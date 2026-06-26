#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long prev1 = 0; 
    long long prev2 = 1; 
    long long current;   

    cin >> n;


    
    if(n == 0){
        cout << 0;
        return 0;
    }

    if(n == 1){
        cout << 1;
        return 0;
    }

    
    for(int i = 2; i <= n; i++){
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    
    cout << current;
    
    return 0;
}