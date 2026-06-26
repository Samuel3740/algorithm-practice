#include <iostream>
using namespace std;

int main(){
    int A, B, C, H, M;
    
    cin >> A >> B;
    cin >> C;
    
    M = (B + C) % 60;
    H = A + ((B + C) / 60); 
    
    if(H > 23){
        H -= 24;
    }
    cout << H << " " << M << endl;   
}