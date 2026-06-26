#include <iostream>
using namespace std;

int main(){
    int S, T, D;
    cin >> S >> T >> D;
    
    int time = D / (2 * S);
    int F = time * T;
    
    cout << F << endl;
    
    return 0;
}