#include <iostream>
#include <string>
using namespace std;

int main(){
    int A, B, C, D;

    cin >> A >> B >> C >> D;
    
    A = abs(A);
    B = abs(B);
    C = abs(C);
    D = abs(D);
    
    string AB = to_string(A) + to_string(B);
    string CD = to_string(C) + to_string(D);
    
    long long result = stoll(AB) + stoll(CD);
    
    cout << result << endl;
    
    return 0;
}