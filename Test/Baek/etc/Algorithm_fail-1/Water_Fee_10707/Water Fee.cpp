#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A, B, C, D, P;
    cin >> A >> B >> C >> D >> P;
    
    int X_cost = A * P;
    int Y_cost;
    
    if(P <= C){
        Y_cost = B;
    }
    else{
        Y_cost = B + (P - C) * D;
    }
    
    cout << min(X_cost, Y_cost) << endl;
    
    return 0;
}