#include <iostream>
using namespace std;

int main(){
    int A, B, C, H, M;
    
    cin >> A >> B;
    cin >> C;
    
    M = B + C;
    H = A + ((B + C) / 60); 
    
    if(M > 59){
        if(H > 23){
            H = H - 24;
            M = (B + C) % 60;
                cout << H << " " << M << endl;
        }
        else if(H <= 23){
            H = A + ((B + C) / 60); 
            M = (B + C) % 60;
                cout << H << " " << M << endl;
        }
    }
    else if(M <= 59){
        H = A;
        M = B + C;
                cout << H << " " << M << endl;
    }
}