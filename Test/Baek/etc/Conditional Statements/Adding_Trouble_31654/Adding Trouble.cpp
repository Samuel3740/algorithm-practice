#include <iostream>
using namespace std;

int main(){
    long long A, B, C;
    cin >> A >> B >> C;
    
    if(A + B == C){
        cout << "correct!" << endl;
    }
    else{
        cout << "wrong!" << endl;
    }
    
    return 0;
}