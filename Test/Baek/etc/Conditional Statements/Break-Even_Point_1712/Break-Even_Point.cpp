#include <iostream>
using namespace std;

int main(){
    long long A, B, C;
    cin >> A >> B >> C;
    
    if(C <= B){
        cout << -1 << endl;
        
        return 0;
    }
    
    long long profit_per_unit = C - B;
    long long breakeven = (A / profit_per_unit) + 1;
    
    if(A % profit_per_unit == 0){
        breakeven = (A / profit_per_unit) + 1;
    }
    
    cout << breakeven << endl;
    
    return 0;
}